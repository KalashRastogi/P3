#include<bits/stdc++.h>
using namespace std;
string distinctChar(string p){
    string st;
    char prev;
    int index=1;
    prev=p[0];
    st=prev;
    for(int i=1;i<p.length();i++){
        if(p[i]==prev){
            continue;
        }
        else{
            st=st+(p[i]);
            prev=p[i];
        }
    }
    return st;
}
int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;
    str1=distinctChar(str1);
    str2=distinctChar(str1);
    if(str1==str2){
        cout<<"in same order";
    }
    else{
        cout<<"not in same order";
    }
    return 0;
}
