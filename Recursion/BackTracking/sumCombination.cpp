#include<bits/stdc++.h>
using namespace std;
void comb(int arr[],int n,int r,int inpIndex, int out[], int outIndex,int sum){
  if(outIndex==r){
    int s=0;
    for(int i=0;i<r;i++){
      s+=out[i];
    }
    if(s==sum){
      for(int i=0;i<r;i++){
        cout<<out[i]<<" ";
      }
      cout<<endl;
    }
    return;
  }
  if(inpIndex>=n){
    return ;
  }
  //not chosen
  comb(arr,n,r,inpIndex+1,out,outIndex,sum);
  //chosen
  out[outIndex] = arr[inpIndex];
  comb(arr,n,r,inpIndex+1,out,outIndex+1,sum);
}
int main(){
  int arr[]={1,2,3,4,5};
  int r=3;
  int out[r];
  int sum=8;
  int n=sizeof(arr)/sizeof(int);
  comb(arr,n,r,0,out,0,sum);
  return 0;
}
