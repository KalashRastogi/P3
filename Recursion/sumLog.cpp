#include<bits/stdc++.h>
using namespace std;
double sumLog(int n){
    if(n==0){
        return 0;
    }
    return log(n)+sumLog(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"output:"<<sumLog(n);
}