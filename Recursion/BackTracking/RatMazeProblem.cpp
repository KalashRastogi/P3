#include<bits/stdc++.h>
#define MAX 10000
int maze[MAX][MAX];
int m,n;
using namespace std;
bool pathExist(int i, int j){
    if(maze[i][j]==1 && i==(m-1) && j==(n-1)){
        return true;
    }
    if(!(i>=0 && i<=m-1) || !(j>=0 && j<=n-1)){
        return false;
    }
    if(maze[i][j]==0){
        return false;
    }
    if(maze[i][j]==1){
        maze[i][j]=-1;
        return pathExist(i+1,j) || pathExist(i,j+1);
    }
    return pathExist(i+1,j) || pathExist(i,j+1);
}
int main(){
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>maze[i][j];
        }
    }
    maze[0][0]=-1;
    if(pathExist(0,0)){
        cout<<"Yes";
    }
    else{
        cout<<"No"<<endl;
    }
    for(int k=0;k<m;k++){
        for(int l=0;l<n;l++){
            cout<<maze[k][l]<<" ";
        }
        cout<<endl;
    }
}