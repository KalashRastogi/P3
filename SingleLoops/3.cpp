#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,lsb,decimal=0,count=0;
    cin>>n;
    while(n!=0){
        lsb = n%2;
        decimal+=(lsb*pow(2,count));
        count++;
    }
    cout<<decimal;
}