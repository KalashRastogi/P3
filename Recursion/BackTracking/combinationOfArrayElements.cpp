#include<bits/stdc++.h>
using namespace std;
void comb(int arr[],int n,int r,int inpIndex, int out[], int outIndex){
  if(outIndex==r){
    for(int i=0;i<r;i++){
      cout<<out[i]<<" ";
    }
    cout<<endl;
    return;
  }
  if(inpIndex>=n){
    return ;
  }
  //not chosen
  comb(arr,n,r,inpIndex+1,out,outIndex);
  //chosen
  out[outIndex] = arr[inpIndex];
  comb(arr,n,r,inpIndex+1,out,outIndex+1);
}
int main(){
  int arr[]={1,2,3,4,5};
  int r=3;
  int out[r];
  int n=sizeof(arr)/sizeof(int);
  comb(arr,n,r,0,out,0);
  return 0;
}
