/*
C(n) = summation__i=0_to_n-1  (C(i)*C(n-i-1))
*/
#include<bits/stdc++.h>
using namespace std;
int catalan(int n){
    int temp=0;
    if(n==0||n==1){
        return 1;
    }
    for(int i=0;i<n;i++){
        temp +=catalan(i)*catalan(n-i-1);
    }
    return temp;
}
int main(){
    int n;
    cin>>n;
    cout<<catalan(n);
    return 0;
}
