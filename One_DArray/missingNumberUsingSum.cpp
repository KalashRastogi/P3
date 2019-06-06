#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,temp=0,sum;
    cin>>n;
    sum=((n+1)*(n+2))/2;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum-=a[i];
    }
    cout<<sum;
    return 0;
}