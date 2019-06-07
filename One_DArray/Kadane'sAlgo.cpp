#include <bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
    int n,*a,globalMax=INT_MIN,localMax=0;
    cin>>n;
    a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        localMax+=a[i];
        if(localMax>globalMax){
            globalMax=localMax;
        }
        if(localMax<0){
            localMax = 0;
        }
    }
    cout<<globalMax;
    delete[] a;
    return 0;
}