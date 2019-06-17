#include<bits/stdc++.h>
using namespace std;
int ways(int start,int end){
    if(start==end){
        return 1;
    }
    if(start>end){
        return 0;
    }
    return ways(start+1,end) + ways(start+2,end);
}
int ways2(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    return ways2(n-1)+ways2(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<ways(0,n)<<endl;
    cout<<ways2(n);
    return 0;
}