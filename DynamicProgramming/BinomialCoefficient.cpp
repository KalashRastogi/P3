/*
n(C)k = n-1(C)k + n-1(C)k-1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int C[n+1][k+1];
  for(int i=0;i<=n;i++){
    C[i][0]=1;
  }
  for(int j=1;j<=k;j++){
    C[0][j]=0;
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=k;j++){
      C[i][j]=C[i-1][j]+C[i-1][j-1];
    }
  }
  for(int i=0;i<=n;i++){
    for(int j=0;j<=k;j++){
      cout<<C[i][j]<<"  ";
    }
    cout<<endl;
  }
  cout<<C[n][k]<<endl;
  return 0;
}
