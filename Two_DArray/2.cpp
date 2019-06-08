#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,sumRow=0,sumCol=0,sumDiag1=0,sumDiag2=0;
    cin>>m>>n;
    int a[m+1][n+1];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        sumRow=0;sumCol=0;
        for(int j=0;j<n;j++){
            if(i==j){
                sumDiag1+=a[i][j];
            }
            if((i+j)==(m-1)){
                sumDiag2+=a[i][j];
            }
            sumRow+=a[i][j];
            sumCol+=a[j][i];
        }
        a[i][n]=sumRow;
        a[m][i]=sumCol;
        a[m][n]=sumDiag1;
    }
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<a[i][j]<<"   ";
        }
        cout<<endl;
    }
    bool flag=true;
    for(int i=0;i<m-1;i++){
        if(a[i][m]!=a[i+1][m]){
            flag=false;
        }
    }
    if(flag){
        for(int i=0;i<m-1;i++){
            if(a[m][i]!=a[m][i+1]){
                flag=false;
            }
        }    
    }
    if(flag){
        if(a[0][m]==a[m][0] && a[m][0]==sumDiag1 && sumDiag2==sumDiag1){
            flag=true;
        }
        else{
            flag=false;
        }
    }
    if(flag){
        cout<<"Magic";
    }
    return 0;
}