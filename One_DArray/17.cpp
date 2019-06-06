#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,decimal;
    cin>>n;
    int a[n];
    for(int i=n-1;i>=0;i--){
        cin>>a[i];
    }   
    for(int i=n-1;i>=0;i--){
        decimal+=a[i]*pow(2,i);
    }
    cout<<decimal;
    return 0;
}