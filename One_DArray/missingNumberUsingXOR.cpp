#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,temp=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=(n+1);i++){
        temp=temp^i;
    }
    for(int i=0;i<n;i++){
        temp=temp^a[i];
    }
    cout<<temp;
    return 0;
}