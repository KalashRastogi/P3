#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int *a,int start,int end,int toBeSearched){
    if(start>end){
        return false;
    }
    int mid=(start+end)/2;
    if(a[mid]==toBeSearched){
        return true;
    }
    else if(toBeSearched<a[mid]){
        binarySearch(a,start,mid-1,toBeSearched);
    }
    else{
        binarySearch(a,mid+1,end,toBeSearched);
    }
}
int main(){
    int temp,n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        temp=k-a[i];
        if(binarySearch(a,0,n,temp)){
            cout<<"Yes";
            break;
        }
    }
    return 0;
}