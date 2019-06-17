#include<bits/stdc++.h>
using namespace std;
int noDigits(int num){
    if(num==0){
        return 0;
    }
    return noDigits(num/10)+1;
}
int main(){
    int num;
    cin>>num;
    cout<<noDigits(num);
    return 0;
}