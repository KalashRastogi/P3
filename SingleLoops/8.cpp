#include<bits/stdc++.h>
using namespace std;
bool isSemiPrime(int n){
    int count=2;
    for(int i=2;i<=n/2;i++){
        if(!(n%i)){
            count++;
        }
    }
    if(count==4){
        return true;
    }
    return false;
}
int main(int argc, const char** argv) {
    int num;
    cin>>num;
    if(isSemiPrime(num)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}