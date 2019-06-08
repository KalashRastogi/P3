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
    for(int i=1;i<n-1;i++){
        flag=true;
        for(int j=0;j<i;j++){
            if(a[i]<a[j]){
                flag=false;
                break;
            }
        }
        if(flag){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            cout<<a[i];
            break;
        }
    }
    if(!flag){
        cout<<"no such element";
    }
    return 0;
}