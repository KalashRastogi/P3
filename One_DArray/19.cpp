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
    for(int i=0;i<n;i++){
        if(a[i]>max){
            smax=max;
            max=a[i];
        }
        else if(a[i]>smax){
            smax=a[i];
        }
    }
    cout<<smax;
    return 0;
}