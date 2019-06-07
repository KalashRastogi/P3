#include<bits/stdc++.h>
using namespace std;
int b2d(string bin,int last,int exp){
    if(last<0)
        return 0;
    return ((bin[last]-'0')*pow(2,exp))+b2d(bin,last-1,exp+1);    
}
int main(){
    string bin;
    cin>>bin;
    cout<<b2d(bin,(bin.length()-1),0);
    return 0;
}