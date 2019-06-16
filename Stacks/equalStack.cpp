#include<bits/stdc++.h>
using namespace std;
bool equalStack(stack<int> s1,stack<int> s2){
    while(!s1.empty() && !s2.empty()){
        if(s1.top()!=s2.top()){
            return false;
        }
        s1.pop();
        s2.pop();
    }
    if(s1.empty() && s2.empty()){
        return true;
    }
    else{
        return false;
    }
}
void printStack(stack<int> s){
    cout<<s.top()<<" <-top"<<endl;
    s.pop();
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
int main(){
    stack <int> s1;
    stack <int> s2;
    int a;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        s1.push(a);
    }
    printStack(s1);
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        s2.push(a);
    }
    printStack(s2);
    if(equalStack(s1,s2)){
        cout<<"equal";
    }
    else{
        cout<<"not equal";
    }
    return 0;
}