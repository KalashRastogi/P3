#include<bits/stdc++.h>
using namespace std;
int main(){
      cin>>n;
      int k,n,sum;
      int set[n+1]={0};
      for(int i=1;i<=n;++i){
            cin>>set[i];
      }
      cin>>sum;
      int subset[sum+1][n+1];
      for(int i=0;i<=n;i++){
            subset[0][i]=1;
      }
      for(int i=1;i<=sum;i++){
            for(int j=1;j<=n;j++){
                  k=0;
                  if(i>=set[j]){
                        k=subset[i-set[j]][j-1];
                  }
                  subset[i][j]= k || subset[i][j-1];
            }
      }
      for(int i=1;i<=sum;i++){
            for(int j=1;j<=n;j++){
                  cout<<subset[i][j]<<"  ";
            }
            cout<<endl;
      }
      cout<<subset[sum][n]<<endl;
      return 0;
}
