#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter element:";
    cin>>num;
    for(int i=0;i<n;i++){
        if(a[i]==num){
            cout<<"index of given element:"<<i;
            break;
        }
    }
    return 0;
}