#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
    int n,m,right_up,right_down,right;
    cin>>n>>m;
    int mine[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mine[i][j];
        }
    }
    for(int col = m-2; col >= 0; col--){
        for(int row = 0; row < n; row++){
            right_up = row > 0? mine[row-1][col+1]:0;
            right_down = row < n-1? mine[row+1][col+1]:0;
            right = mine[row][col+1];
            mine[row][col] += max(right,max(right_up,right_down));
        }
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(mine[i][0]>ans){
            ans = mine[i][0];
        }
    }
    cout<<ans<<endl;
    return 0;
}
