#include<bits/stdc++.h>
using namespace std;
int main(){
      int n;
      cin>>n;
      int friends[n+1],nthAsAPair,nthAsSingle;
      friends[0]=0;
      friends[1]=1;
      friends[2]=2;
      for(int i=3;i<=n;i++){
            nthAsSingle = friends[i-1];
            nthAsAPair = (i-1)*friends[i-2];
            friends[i] = nthAsAPair + nthAsSingle;
      }
      cout<<friends[n];
      return 0;
}
