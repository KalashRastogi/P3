#include<bits/stdc++.h>
using namespace std;
int main(){
    int index;
    string str;
    getline(cin,str);
    while(str.find(" ")!=-1){
        index=str.find(" ");
        str.erase(index,1);
    }
    cout<<str;
    return 0;
}
