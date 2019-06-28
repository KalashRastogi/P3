#include<bits/stdc++.h>
using namespace std;
bool pallin(string str){
    int len=str.length();
    for(int i=0,j=len-1;i<j;i++,j--){
        if(str[i]!=str[j]){
            return false;
        }
    }
    return true;
}
int main(){
    string str;
    cin>>str;
    int len = str.length();
    for(int j=1;j<=len;j++){
        for(int i=0;i+j<=len;i++){
            if(pallin(str.substr(i,j))){
                cout<<str.substr(i,j)<<"   ";
            }
        }
    }
    return 0;
}
