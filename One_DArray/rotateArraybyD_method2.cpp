#include<bits/stdc++.h>
using namespace std;
void reverseArr(int *arr,int start, int end){
    for(int i=start,j=end-1;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }
}
int main(){
    int n,d,temp;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverseArr(a,0,d);
    reverseArr(a,d,n);
    reverseArr(a,0,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}