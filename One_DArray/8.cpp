#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,hammingDist=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int i=0,j=0;
    while(i<n && j<n){
        if(a[i]==b[j]){
            i++;
            j++;
        }
        else{
            hammingDist++;
            i++;
            j++;
        }
    }
    cout<<"Hamming Distance:"<<hammingDist;
    return 0;
}