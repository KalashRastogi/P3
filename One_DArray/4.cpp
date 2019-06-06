#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num,min,max,count=0;
    cin>>n>>min>>max;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>=max && a[i]<=min){
            count++;
        }
    }
    cout<<count;
    return 0;
}