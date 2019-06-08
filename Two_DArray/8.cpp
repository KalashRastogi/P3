#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,sum=0;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<m-1;i++){
        for(int j=1;j<n-1;j++){
            if(a[i][j]>=a[i+1][j] && a[i][j]>=a[i-1][j] && a[i][j]>=a[i][j+1] && a[i][j]>=a[i][j-1]){
                cout<<a[i][j]<<" ";
            }       
        }
    }
    return 0;
}