#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num,max=INT_MIN;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>=max){
            max=a[i];
        }
    }
    cout<<"Max element:"<<max;
    return 0;
}