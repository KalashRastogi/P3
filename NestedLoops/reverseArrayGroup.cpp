#include<bits/stdc++.h>
using namespace std;
void reverseArr(int *arr,int start, int end){
    for(int i=start,j=end-1;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }
}
int main(){
    int i,k,n;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int loop=n/k;
    loop=loop*k;
    for(int i=0;i<loop;i=i+k){
        reverseArr(a,i,i+k);
    }
    reverseArr(a,loop,n);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}