#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int len=str.length();
    for(int i=0;i<len;i++){
        for(int j=i+1;j<=len;j++){
            cout<<i<<"   "<<j<<endl;
            cout<<str.substr(i,j)<<endl;
        }
    }
    return 0;
}
