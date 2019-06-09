#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sq=sqrt(n);
    for(int i=1;i<sq;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(int i=sq+1;i>=1;i--){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
    return 0;
}