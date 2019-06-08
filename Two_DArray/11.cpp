#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,k;
    cin>>m>>n>>k;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int totalDiag=m+n-1;
    int loop[totalDiag+1]={0};
    for(int i=1;i<=totalDiag/2;i++){
        loop[i]=i;
        loop[totalDiag-i+1]=i;
    }
    if(totalDiag%2){
        loop[(totalDiag/2)+1]=totalDiag/2+1;
    }
    int index1=0,index2=0;
    index1=0;
    index2=abs(k-m);
    if(k<m){
        swap(index1,index2);
    }
    for(int i=0;i<loop[k];i++){
        cout<<a[index1][index2]<<" ";
        index1++;
        index2++;
    }
    return 0;
}