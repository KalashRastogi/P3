/*
magine a mobile keypad configuration just like one given below

1 2 3
4 5 6
7 8 9

Standing on a number or a button, it takes 0 seconds for the button to be pressed. It takes 2 seconds to traverse to all the adjacent buttons and 4 seconds to move the control to all the buttons next to the adjacent ones. For example, suppose we are currently standing on digit 1, now time taken to move the control to buttons

2   ->  2 sec
5   ->  2 sec
4   ->  2 sec
3   ->  4 sec
6   ->  4 sec
9   ->  4 sec
8   ->  4 sec
7   ->  4 sec

Another example, suppose we are currently standing on button 5, now time taken to move the control to any one of the button is 2 seconds each.

Given an nine digit configuration of the keypad and a sequence of integers, find the total time to type the given sequence.

Input Format

The question contains a two line input. The first line contains two integers, first integer denotes an nine digit keypad configuration K and second integer N denotes the number of digits to be typed using the keypad. The second line contains N space separated single digit integers

Constraints

K is an integer of nine digits from 1 - 9 1<= N <= 100000 1<= A[i] <= 9

Output Format

The time taken to type the given sequence.

Sample Input 0

234719658 5
1 8 2 4 6

Sample Output 0

14

Explanation 0

We currently stand on key 1

Time to press key 1 = 0s

Move from 1 to 8 = 2s

Time to press key 8 = 0s

Move from 8 to 2 = 4s

Time to press key 2 = 0s

Move from 2 to 4 = 4s

Time to press key 4 = 0s

Move from 4 to 6 = 4s

Time to press key 6 = 0s

Total time = 14 seconds
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int reverse(int n){
 int rev=0;
 while(n!=0){
     rev=(rev*10)+(n%10);
     n/=10;
 }
    return rev;
}
int main() {
    int n,config[3][3],indexes[10];
    cin>>n;
    n=reverse(n);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            config[i][j]=n%10;
            indexes[n%10]=(i*10)+j;
            n/=10;
        }
    }
    int s,previ,prevj,i,j,k,time=0,p;
    cin>>n;
    cin>>s;
    k=indexes[s];
    if(k<=2){
            previ=0;
            prevj=k;
        }
        else{
            prevj=k%10;
            k/=10;
            previ=k;
    }
    for(int q=0;q<n-1;q++){
        cin>>p;
        k=indexes[p];
        if(k<=2){
            i=0;
            j=k;
        }
        else{
            j=k%10;
            k/=10;
            i=k;
        }
        int dist=sqrt(pow(abs(previ-i),2)+pow(abs(prevj-j),2));
        if(dist<sqrt(2)){
            time+=2;
        }
        else{
            time+=4;
        }
        previ=i;
        prevj=j;
    }
    cout<<time;
    return 0;
}
