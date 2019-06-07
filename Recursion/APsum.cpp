#include<bits/stdc++.h>
using namespace std;
long int APsum(int a,int n,int d){
    if(n==0){
        return 0;
    }
    return a+APsum(a+d,n-1,d);
}
int main(){
    int a,d,n;
    cin>>a>>d>>n;
    cout<<APsum(a,n,d);
    return 0;
}