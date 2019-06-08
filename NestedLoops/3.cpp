#include<bits/stdc++.h>
using namespace std;
int main(){
    int ele,n,max=INT_MIN;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int freq=1;
    for(int i=0;i<n;i++){
        if(a[i]!=a[i+1]){
            if(freq>max){
                max=freq;
                ele=a[i];
            }
            cout<<a[i]<<":"<<freq;
            freq=1;
            cout<<endl;
        }
        else{
            freq++;
        }
    }
    cout<<ele;
    return 0;
}