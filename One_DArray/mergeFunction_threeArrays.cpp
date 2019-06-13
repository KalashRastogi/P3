#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,o;
    cin>>m>>n>>o;
    int a[m],b[n],d[o],c[m+n+o];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<o;i++){
        cin>>d[i];
    }
    int i=0,j=0,k=0,l=0;
    while(i<m && j<n && l<o){
        if(a[i]<b[j] && a[i]<d[l]){
            c[k]=a[i];
            k++;
            i++;
        }
        else if(b[j]<a[i] && b[j]<d[l]){
            c[k]=b[j];
            k++;
            j++;
        }
        else if(d[l]<a[i] && d[l]<b[j]){
            c[k]=d[l];
            k++;
            l++;
        }
        else if(a[i]==b[j] && a[i]<d[l]){
            c[k]=a[i];
            c[k+1]=a[i];
            i++;
            j++;
            k+=2;
        }
        else if(b[j]==d[l] && b[j]<a[i]){
            c[k]=b[j];
            c[k+1]=b[j];
            l++;
            j++;
            k+=2;
        }
        else{
            c[k]=d[l];
            i++;
            j++;
            k++;
            l++;
        }
    }
    while(i<m){
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<n){
        c[k]=b[j];
        k++;
        j++;
    }
    while(l<o){
        c[k]=d[l];
        k++;
        l++;
    }
    for(int i=0;i<k;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}