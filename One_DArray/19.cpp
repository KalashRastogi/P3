#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max,smax;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(a[0]>a[1]){
        max=a[0];
        smax=a[1];
    }
    else{
        max=a[1];
        smax=a[0];
    }
    for(int i=2;i<n;i++){
        if(a[i]>max){
            smax=max;
            max=a[i];
        }
        else if(a[i]>smax){
            smax=a[i];
        }
    }
    for(int j=0;j<n;j++){
        if(a[j]==smax){
            for(int i=j;i<n-1;i++){
                a[i]=a[i+1];
            }
            break;
        }
    }
    n-=1;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}