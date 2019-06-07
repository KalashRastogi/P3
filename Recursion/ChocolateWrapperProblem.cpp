/*
We have to maximize the number of chocolate to be eaten
given input is money, price of a chocolate, max number of wrapper of chocolate 
required to win one more chocolate.
if money=10, price=2, #Ofwrap=2
chocolates=5+2+1=8
*/ 
#include<bits/stdc++.h>
using namespace std;
int recursiveWrap(int noOfChoclates,int wrap){
    if(noOfChoclates<wrap){
        return 0;
    }
    int chocolatesFromWrappers=noOfChoclates/wrap;
    int remainingWrappers=noOfChoclates%wrap;
    return chocolatesFromWrappers+recursiveWrap(chocolatesFromWrappers+remainingWrappers,wrap);
}
int fun(int money, int price, int wrap){
    if(money<price){
        return 0;
    }
    int noOfChoc=money/price;
    return noOfChoc + recursiveWrap(noOfChoc,wrap);
}
int main(){
    int money,price,wrap;
    cin>>money>>price>>wrap;
    cout<<fun(money, price, wrap);
    return 0;
}