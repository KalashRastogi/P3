#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ones=0,zeros=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i])
            ones++;
        else
            zeros++;
    }
    for(int i=0;i<n;i++){
        if(i%2==0 && zeros>0){
            a[i]=0;
            zeros--;
        }
        else if(i%2!=0 && ones>0){
            a[i]=1;
            ones--;
        }
        else{
            if(zeros)
                a[i]=0;
            else
                a[i]=1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}