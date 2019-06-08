#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,sumCol=0,index,max=INT_MIN;
    cin>>m>>n;
    int a[m][n+1];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        sumCol=0;
        for(int j=0;j<n;j++){
            sumCol+=a[j][i];
        }
        a[n][i]=sumCol;
        if(sumCol>max){
            max=sumCol;
            index=i+1;
        }
    }
    cout<<index;
    return 0;
}