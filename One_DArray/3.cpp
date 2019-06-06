#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num,count=0,sum=0,avg;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    avg = sum/n;
    for(int i=0;i<n;i++){
        if(a[i]>avg){
            count++;
        }
    }
    cout<<count;
    return 0;
}