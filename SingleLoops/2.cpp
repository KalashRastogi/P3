#include<bits/stdc++.h>
using namespace std;
int main(){
    int dig, num, sum=0;
    cin>>num;
    while(num!=0){
        sum+=(num%10);
        num/=10;
    }
    cout<<"sum of digits:"<<sum;
    return 0;
}