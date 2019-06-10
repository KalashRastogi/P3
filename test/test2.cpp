/*
After winning yesterday's match against Australia, Hardik Pandya thought of
cooking up a problem. As he is a "champ" and contributes heavily in almost
all the wins of India, with all the amount he collects as the man of the match
and with the earning of this season's IPL, he bought a new house.
The house looks like a grid of size N(1-indexed). This house consists of NxN
rooms. Each of these rooms contain gold plated watches gifted to him by
Neeta Ambani. For each room, the room number is equal to the sum of the
row number and column number. That means that the first room number is 2
inspite of being 1.
The number of watches present in the room makes up to the absolute
difference betweent the sum of even digits and the sum of odd digits in its
room number.
For example, if the room number is 2134, then the number of gold plated
watchs kept in that room will be |(2+4)-(1+3)| = 2
You are given the size of the grid N and you have to print the number of
watches Neeta gifted Hardik.
Constraints:
1<=T<=100000
1<=N<=1000000
Input:
The first line of input contains a single integer T denoting the number of test
cases. The description of T test cases follows.
The only line of each test case contains a single integer N.
Output:
For each line, print the answer on a separate line.
SAMPLE INPUT
3
1
2
3
SAMPLE OUTPUT
2
12
36
*/
#include<bits/stdc++.h>
using namespace std;
int convert(int n){
    int sum1=0,sum2=0;
    while(n!=0){
        if((n%10)%2){
            sum2+=(n%10);
        }
        else{
            sum1+=(n%10);
        }
        n/=10;
    }
    return abs(sum1-sum2);
}
int main(){
    int t;
    long long int n=1000000,sum=0,ans[1000001];
    for(long long int i=n+1;i<(2*n)+1;i++){
        sum+=convert(i);
    }
    sum*=2;
    sum-=convert(2*n);
    ans[n]=sum;
    n--;
    while(n>0){
        ans[n]=ans[n+1]+(2*convert(n+1))-(2*convert(2*(n+1)-1))-convert(2*(n+1))-convert(2*(n+1)-2);
        n--;
    }
    for(long long int i=2;i<1000001;i++){
        ans[i]+=ans[i-1];
    }
    cin>>t;
    while(t){
        cin>>n;
        cout<<ans[n]<<endl;
        t--;
    }
    return 0;
}