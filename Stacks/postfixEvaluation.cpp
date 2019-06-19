#include<bits/stdc++.h>
using namespace std;
int postEval(string expr){
    int num1,num2;
    int len=expr.length();
    stack <int> helpingStack;
    for(int i=0;i<len;++i){
        if(expr[i]!='+' && expr[i]!='-' && expr[i]!='*' && expr[i]!='/' && expr[i]!='^'){
            helpingStack.push((int)(expr[i]-'0'));
        }
        else{
            if(expr[i]=='+'){
                num1=helpingStack.top();
                helpingStack.pop();
                num2=helpingStack.top();
                helpingStack.pop();
                helpingStack.push(num2+num1);
            }
            if(expr[i]=='-'){
                num1=helpingStack.top();
                helpingStack.pop();
                num2=helpingStack.top();
                helpingStack.pop();
                helpingStack.push(num2-num1);
            }
            if(expr[i]=='*'){
                num1=helpingStack.top();
                helpingStack.pop();
                num2=helpingStack.top();
                helpingStack.pop();
                helpingStack.push(num2*num1);
            }
            if(expr[i]=='/'){
                num1=helpingStack.top();
                helpingStack.pop();
                num2=helpingStack.top();
                helpingStack.pop();
                helpingStack.push(num2/num1);
            }
            if(expr[i]=='^'){
                num1=helpingStack.top();
                helpingStack.pop();
                num2=helpingStack.top();
                helpingStack.pop();
                helpingStack.push(pow(num2,num1));
            }
        }
    }
    return helpingStack.top();
}
int main(){
    string expr;
    cin>>expr;
    cout<<postEval(expr)<<endl;
    return 0;
}