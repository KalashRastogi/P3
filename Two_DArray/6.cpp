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
    int max1=INT_MIN;
    for(int i=0;i<m;i++){
        sum=0;
        for(int j=0;j<n;j++){
            sum+=a[i][j];
        }
        if(sum>max1){
            max1=sum;
        }
    }
    cout<<max1<<" ";
    return 0;
}