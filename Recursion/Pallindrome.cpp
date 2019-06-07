#include<bits/stdc++.h>
using namespace std;
bool isPallin(string str,int start,int end){
    if(start>=end){
        return true;
    }
    if(str[start]!=str[end]){
        return false;
    }
    isPallin(str,start+1,end-1);
}
int main(){
    string str;
    cin>>str;
    if(isPallin(str,0,str.length()-1)){
        cout<<"Pallindrome";
    }
    else{
        cout<<"not a pallindrome";
    }
    return 0;
}