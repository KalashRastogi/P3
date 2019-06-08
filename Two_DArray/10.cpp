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
    int o,p;
    cin>>o>>p;
    int b[o][p];
    for(int i=0;i<o;i++){
        for(int j=0;j<p;j++){
            cin>>b[i][j];
        }
    }
    if(n==o){
        int c[m][p]={{0}};
        for(int i=0;i<m;i++){
            for(int j=0;j<p;j++){
                sum=0;
                for(int k=0;k<o;k++){
                    sum+=a[i][k]*b[k][j];
                }
                c[i][j]=sum;
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }   
    }
    return 0;
}