#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m],b[n];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int i=0,j=0,temp;
    while(i<m && j<n){
        if(a[i]==b[j]){
            i++;
            j++;
            temp=a[i];
        }
        else if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else{
            j++;
        }
    }
    while(i<m){
        cout<<a[i]<<" ";
        i++;
    }
    return 0;
}