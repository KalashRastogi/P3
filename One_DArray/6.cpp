/*Need Modification*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num,i,j;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    i=j=0;
    while(i<n && j<n){
        if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        if(b[j]<a[i]){
            cout<<a[i]<<" ";
            j++;
        }
        if(a[i]==b[j]){
            i++;
            j++;
        }
    }
    return 0;
}