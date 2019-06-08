#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    bool flag=true;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n-1;i++){
        sum=0;
        for(int j=0;j<i;j++){
            sum+=a[j];
        }
        for(int j=i+1;j<n;j++){
            sum-=a[j];
        }
        if(sum==0){
            cout<<a[i];
            break;
        }
    }
    if(sum!=0){
        cout<<"no such element";
    }
    return 0;
}