#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n,int i){
    if(n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n%i==0){
        return false;
    }
    if((i*i)<n){
        return true;
    }
    return isPrime(n,i+1);
}
int main(int argc, const char** argv) {
    int a,b;
    cin>>a>>b;
    if(isPrime(a,2) && isPrime(b,2) && (abs(a-b)==2)){
        cout<<"Twin Prime";
    }
    else{
        cout<<"Not Twin Prime";
    }
    return 0;
}