#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int partitions[n+1][k+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++){
            partitions[i][j] = 0;
        }
    }
    partitions[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            partitions[i][j] = partitions[i-1][j-1]+j*partitions[i-1][j];
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++){
            cout<<partitions[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<partitions[n][k];
    return 0;
}
