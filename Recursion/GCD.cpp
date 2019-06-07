#include<bits/stdc++.h>
using namespace std;
int Euclidgcd(int n1,int n2){
    if(n1%n2==0){
        return n2;
    }
    return Euclidgcd(n2,n1%n2);
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<Euclidgcd(max(n1,n2),min(n1,n2));
    return 0;
}