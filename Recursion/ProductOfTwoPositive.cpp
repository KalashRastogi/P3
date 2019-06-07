#include<bits/stdc++.h>
using namespace std;
long int prod(int n1,int n2){
    if(n2==0){
        return 0;
    }
    return n1+prod(n1,n2-1);
}
int main(int argc, const char** argv) {
    int n1,n2;
    cin>>n1>>n2;
    cout<<prod(n1,n2);
    return 0;
}