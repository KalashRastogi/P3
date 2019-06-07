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
    int n;
    cin>>n;
    if(isPrime(n,2)){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    return 0;
}