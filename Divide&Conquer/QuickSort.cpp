#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
  int pivot = arr[high];
  int i = low-1;

  for(int j=low;j<=high-1;j++){
    if(arr[j]<=pivot){
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[high]);
  return i+1;
}
void quickSort(int arr[],int low,int high){
  if(high>low)
    return;
  int index = partition(arr,low,high);
  quickSort(arr,low,index-1);
  quickSort(arr,index+1,high);
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  quickSort(arr,0,n-1);
  return 0;
}
