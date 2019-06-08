#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,Lsum=0,Rsum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Lsum=a[0];
    for(int i=2;i<n;i++){
        Rsum+=a[i];
    }
    if(Lsum==Rsum){
        cout<<a[1]<<1;
        cout<<endl;
    }
    else{
        int i;
        for(i=2;i<n-1;i++){
            Lsum+=a[i-1];
            Rsum-=a[i];
            if(Lsum==Rsum){
                cout<<a[i]<<"Index:"<<i;
                break;
            }
        }
        if(i==n){
            cout<<"no such element";
        }
    }
    return 0;
}