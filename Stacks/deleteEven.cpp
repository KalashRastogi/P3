#include <bits/stdc++.h>
using namespace std;
void deleteEven(stack<int> &s){
    stack <int> temp;
    while(!s.empty()){
        if(s.top()%2!=0){
            temp.push(s.top());
        }
        s.pop();
    }
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
}
void printStack(stack<int> s){
    cout<<s.top()<<"(top)<-";
    s.pop();
    while(!s.empty()){
        cout<<s.top()<<"<-";
        s.pop();
    }
    cout<<"NULL"<<endl;
}
int main(){
    int a;
    stack <int> s;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        s.push(a);
    }
    printStack(s);
    deleteEven(s);
    printStack(s);
    return 0;
}