#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int dig, num, sum=0, fac0_9[9]={0};
    cin>>num;
    while(num!=0){
        dig = num%10;
        if(fac0_9[dig]!=0){
            sum+=fac0_9[dig];
        }
        else{
            fac0_9[dig]=factorial(dig);
            sum+=fac0_9[dig];
        }
        num/=10;
    }
    cout<<"sum of factorial of digits:"<<sum;
    return 0;
}