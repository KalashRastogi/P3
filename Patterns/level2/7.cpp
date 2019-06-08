#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,spaces;
    cin>>n;
    spaces=n-1;
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            for(int j=1;j<=n;j++){
                cout<<j;
            }
        }
        else{
            for(int j=1;j<=spaces;j++){
                cout<<" ";
            }
            cout<<n-i+1;
        }
        cout<<endl;
        spaces--;
    }
    return 0;
}