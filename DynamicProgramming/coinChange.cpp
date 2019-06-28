/*
Ways(Total cents,coins type) = Ways(TotalCents,coins type-1) + Ways(Total cents-coinsvalue,coins Type)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  int k,cents,coinsType;
  cin>>cents>>coinsType;
  int coins[coinsType+1]={0};
  int ways[cents+1][coinsType+1]={{0}};
  for(int i=1;i<=coinsType;i++){
    cin>>coins[i];
  }
  for(int i=0;i<=coinsType;++i){
        ways[0][i]=1;
 }
  for(int i=1;i<=cents;i++){
    for(int j=1;j<=coinsType;j++){
      //i-cents,j-coinsType
      k=0;
      if(i >= coins[j]){
        k = ways[i-coins[j]][j];
      }
      ways[i][j]= ways[i][j-1] + k;
    }
  }
  for(int i=0;i<=cents;i++){
    for(int j=0;j<=coinsType;j++){
      cout<<ways[i][j]<<"  ";
    }
    cout<<endl;
  }
  cout<<ways[cents][coinsType]<<endl;
  return 0;
}
