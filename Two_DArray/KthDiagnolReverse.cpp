#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,start_row,start_col;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cin>>k;
    if(k<n){    
        start_row=0;
        start_col=k;
    }
    else{
        start_col=n-1;
        start_row=k-n+1;
    }
    for(;start_row<n && start_col<n;start_row++,start_col--){
        cout<<a[start_row][start_col]<<" ";
    }
    return 0;
}

