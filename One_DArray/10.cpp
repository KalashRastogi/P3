#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,hammingDist=0;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        c[i]=a[i]^b[i];
        cout<<c[i]<<" ";
    }
    return 0;
}