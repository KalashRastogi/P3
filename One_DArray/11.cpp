#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    int n,i,max;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    max=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(max<a[i]){
            cout<<max<<" ";
            max = a[i];
        }
    }
    return 0;
}
