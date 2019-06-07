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
    int i=0,j=0,temp1=-1;
    while(i<m && j<n){
        if(a[i]==temp1){
            i++;
        }
        else if(b[j]==temp1){
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j] ){
            j++;
        }
        else{
            cout<<a[i];
            temp1=a[i];
            i++;
            j++;
        }
    }    
    return 0;
}