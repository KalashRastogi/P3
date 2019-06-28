/*
n(C)r MOD p = (n-1(C)k%p + n-1(C)k-1%p)%p
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n,k,p;
  cin>>n>>k>>p;
  int C[n+1][k+1];
  for(int i=0;i<=n;i++){
    C[i][0]=1;
  }
  for(int j=1;j<=k;j++){
    C[0][j]=0;
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=k;j++){
      C[i][j]=( ( C[i-1][j] % p ) + ( C[i-1][j-1] % p ) ) % p;
    }
  }
  cout<<C[n][k]<<endl;
  return 0;
}
