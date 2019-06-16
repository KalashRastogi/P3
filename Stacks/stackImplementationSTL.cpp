#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    int a;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        s.push(a);
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}