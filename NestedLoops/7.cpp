#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int j=0;j<n-1;j++){
        if(a[j]!=a[j+1]){
            cout<<a[j]<<" ";
        }
    }
    cout<<a[n-1];
    return 0;
}