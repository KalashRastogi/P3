#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    vector<vector<int>> vec2d(row, vector<int>(col, 0));
    vector<vector<int>> vecAns(row, vector<int>(col, 0));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>vec2d[i][j];
        }
    }
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            if(vec2d[i][j]!=0)
                vec2d[i][j] = min(vec2d[i-1][j],min(vec2d[i-1][j-1],vec2d[i][j-1]))+1;
        }
    }
    cout<<"-----------------\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<vec2d[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
