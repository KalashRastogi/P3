#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,sum=0;
    cin>>m>>n;
    int a[m][n],b[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    int c[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];       
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}