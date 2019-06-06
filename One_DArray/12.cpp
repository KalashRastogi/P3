#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,hammingDist=0;
    cin>>n;
    int a[n],b[n],c[2*n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int i=0, j=0, k=0;
    while(i<n || j<n){
        if(a[i]<=b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        if(a[i]>=b[j]){
            c[k]=b[j];
            j++;
            k++;
        }
    }
    for(int i=0;i<k;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}