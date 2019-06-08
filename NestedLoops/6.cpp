#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cin>>a>>b;
    int mat[a][b];
    n=(a*b);
    int even[n]={0},odd[n]={0};
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>mat[i][j];
        }
    }
    int e=0,o=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(mat[i][j]%2){
                odd[o]=mat[i][j];
                o++;
            }
            else{
                even[e]=mat[i][j];
                e++;
            }
        }
    }
    for(int i=0;i<e;i++){
        cout<<even[i];
    }
    cout<<endl;
    for(int i=0;i<o;i++){
        cout<<odd[i];
    }
    return 0;
}