#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int freq=1;
    for(int i=0;i<n;i++){
        if(a[i]!=a[i+1]){
            if(freq==k){
                cout<<a[i]<<endl;
            }
            freq=1;
        }
        else{
            freq++;
        }
    }
    return 0;
}