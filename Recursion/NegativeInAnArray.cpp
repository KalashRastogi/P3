#include<bits/stdc++.h>
using namespace std;
void printNeg(int arr[],int n){
    if(n==0){
        return;
    }
    printNeg(arr,n-1);
    if(arr[n-1]<0){
        cout<<arr[n-1]<<" ";
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printNeg(arr,n);
    return 0;
}