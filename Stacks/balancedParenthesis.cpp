#include <bits/stdc++.h>
using namespace std;
bool valid(string expression){
    stack <char> st;
    char br;
    int i, len=expression.length();
    for(i=0;i<len;++i){
        if(expression[i]=='(' || expression[i]=='[' || expression[i]=='{'){
            st.push(expression[i]);
        }
        if(expression[i]==')'){
            if(st.top()!='('){
                return false;
            }
            st.pop();
        }
        if(expression[i]=='}'){
            if(st.top()!='{'){
                return false;
            }
            st.pop();
        }
        if(expression[i]==']'){
            if(st.top()!='['){
                return false;
            }
            st.pop();
        }
    }
    if(st.empty()){
        return true;
    }
    return false;
}
int main(){
    string expression;
    cin>>expression;
    if(valid(expression)){
        cout<<"Balanced";
    }
    else{
        cout<<"Not Balanced";
    }
    return 0;
}