#include<bits/stdc++.h>
using namespace std;
void revArray(int* a,int start, int end){
    if(start>=end){
        return;
    }
    swap(a[start],a[end]);
    revArray(a,start+1,end-1);
}
int main(){
    int *a,n;
    cin>>n;
    a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    revArray(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}