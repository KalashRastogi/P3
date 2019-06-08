#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,spacesLeft=1,spacesRight;
    cin>>n;
    spacesRight=n-3;
    for(int j=1;j<=n;j++){
        if(j==1 || j==n){
            cout<<j;
            for(int i=1;i<=n-1;i++){
                cout<<" ";
            }
            cout<<j;
        }
        else{
            cout<<j;
            for(int i=1;i<=spacesLeft;i++){
                cout<<" ";
            }
            cout<<j;
            for(int i=1;i<=spacesRight;i++){
                cout<<" ";
            }
            cout<<j;
            spacesLeft++;
            spacesRight--;
        }
        cout<<endl;
    }
    return 0;
}