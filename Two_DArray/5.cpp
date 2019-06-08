#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int max1=INT_MIN;
    for(int i=0;i<m;i++){
        max1=INT_MIN;;
        for(int j=0;j<n;j++){
            if(a[i][j]>max1){
                max1=a[i][j];
            }
        }
        cout<<max1<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        max1=INT_MIN;;
        for(int j=0;j<m;j++){
            if(a[j][i]>max1){
                max1=a[j][i];
            }
        }
        cout<<max1<<" ";
    }
    return 0;
}