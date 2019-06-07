#include<bits/stdc++.h>
using namespace std;
long int powerFulpow(int n1,int n2){
    if(n2==1){
        return 2;
    }
    return pow(powerFulpow(n1,n2/2),2);
}
int main(int argc, const char** argv) {
    int n1,n2;
    cin>>n1>>n2;
    cout<<powerFulpow(n1,n2);
    return 0;
}