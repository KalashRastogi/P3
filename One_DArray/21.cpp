#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    if(!(sum%2)){
        cout<<"0";
    }
    else{
        cout<<"1";
    }
    return 0;
}