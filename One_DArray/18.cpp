/*Need modification
192
0 1 1 0 0 0 0 0 0*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int size=ceil(log2(n));
    int bin[size];
    while(size>=0){
        bin[size]=n%2;
        n/=2;
        size--;
    }
    for(int i=0;i<=(sizeof(bin)/sizeof(int));i++){
        cout<<bin[i]<<" ";
    }
    return 0;
}