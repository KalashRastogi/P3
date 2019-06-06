#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n,decimal1,decimal2;
    cin>>m>>n;
    int a[m], b[n];
    for(int i=m-1;i>=0;i--){
        cin>>a[i];
    }
    for(int i=m-1;i>=0;i--){
        decimal1+=a[i]*pow(2,i);
    }
    for(int i=n-1;i>=0;i--){
        cin>>b[i];
    }   
    for(int i=n-1;i>=0;i--){
        decimal2+=b[i]*pow(2,i);
    }
    cout<<decimal2-decimal1;
    return 0;
}