#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,temp=0,sum;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if((a[i+1]-a[i])!=1){
            cout<<"missing number:"<<a[i]+1<<endl;
            break;
        }
    }
    return 0;
}