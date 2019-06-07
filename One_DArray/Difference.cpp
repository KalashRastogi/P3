#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    bool flag=true;
    cin>>m>>n;
    int a[m],b[n];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    /* 
       10 12 16*/
    int i=0,j=0,temp1=-1;
    while(i<m && j<n){
        if(a[i]==temp1){
            i++;
        }
        else if(a[i]<b[j] ){
            cout<<a[i];
            flag=!flag;
            temp1=a[i];
            i++;
        }
        else if(a[i]>b[j] ){
            j++;
        }
        else{
            temp1=a[i];
            i++;
            j++;
        }
    }    
    while(i<m){
        if(a[i]!=temp1){
            cout<<a[i];
            flag=!flag;
            temp1=a[i];
        }
        i++;
    }
    if(flag){
        cout<<"Both arrays are same";
    }
    return 0;
}