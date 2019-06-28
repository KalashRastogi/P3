/*
P(n,k) = P(n-1,k) + k*P(n-1,k-1)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int P[n+1][k+1];
  for(int i=0;i<=n;i++){
    P[i][0]=1;
  }
  for(int j=1;j<=k;j++){
    P[0][j]=0;
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=k;j++){
      P[i][j]=P[i-1][j]+(j*P[i-1][j-1]);
    }
  }
  for(int i=0;i<=n;i++){
    for(int j=0;j<=k;j++){
      cout<<P[i][j]<<"  ";
    }
    cout<<endl;
  }
  cout<<P[n][k]<<endl;
  return 0;
}
