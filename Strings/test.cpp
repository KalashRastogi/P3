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
    string st="kaal";
    cout<<distinctChar(st);
}