#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cin>>n>>a>>b;
    int p[n];
    int mat[a][b];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int c=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            mat[i][j]=p[c];
            c++;
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
}