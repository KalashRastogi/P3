#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>k;
    for(int i=k;i<n-1;i++){
        a[i]=a[i+1];
    }
    n-=1;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}