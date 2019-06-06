#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool flag=true;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0,j=n-1;i<j;++i,--j){
        if(a[i]!=a[j]){
            flag=!flag;
            break;
        }
    }
    if(!flag){
        cout<<"Not a pallindrome";
    }
    else{
        cout<<"Pallindrome";
    }
    return 0;
}