#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max=INT_MIN;
    while(n>0){
        cin>>n;
        if(max<n){
            max=n;
        }
    }
    cout<<max;
    return 0;
}