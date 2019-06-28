#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="aba";
    bool flag=true;
    for(int i=0;i<str.length();++i){
        for(int j=i+1;j<=str.length();++j){
            string sstr=str.substr(i,j);
            reverse(sstr.begin(),sstr.end());
            if(str.find(sstr)==-1){
                cout<<"No";
                flag=false;
                break;
            }
        }
    }
    if(flag){
        cout<<"Yes";
    }
    return 0;
}
