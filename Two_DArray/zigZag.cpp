#include<bits/stdc++.h>
using namespace std;
int main(){
    int start_row,start_col,n,k;
    cin>>n;
    /* a=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++){
        a[i]=(int*)malloc(sizeof(int)*n);
    }*/
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(k=0;k<(2*n-1);k++){
        if(k%2){
            if(k<n){    
                start_row=0;
                start_col=k;
            }
            else{
                start_col=n-1;
                start_row=k-n+1;
            }
            for(;start_row<k && start_col<n && start_col>=0;start_row++,start_col--){
                cout<<a[start_row][start_col]<<" ";
            }
        }
        else{
            if(k<n){    
                start_row=k;
                start_col=0;
            }
            else{
                start_col=k-n+1;
                start_row=n-1;
            }
            for(;start_row<k && start_col<n && start_row>=0;start_row--,start_col++){
                cout<<a[start_row][start_col]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}