#include <bits/stdc++.h>
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
int precedence[6][6]={
            {1,1,0,0,0,0},
            {1,1,0,0,0,0},
            {1,1,1,1,0,0},
            {1,1,1,1,0,0},
            {1,1,1,1,0,0},
            {0,0,0,0,0,0}
    };
string infToPost(string expr){
	map<char,int> index;
    index['+']=0;
    index['-']=1;
    index['*']=2;
    index['/']=3;
    index['^']=4;
    index['(']=5;
    int len=expr.length();
    string op="";
    stack<char> operators;
    for(int i=0;i<len;++i){
        //cout<<i<<" "<<op;
        if(expr[i]!='+' && expr[i]!='-' && expr[i]!='*' && expr[i]!='/' && expr[i]!='^' && expr[i]!='(' && expr[i]!=')'){
            op+=expr[i];
        }
        else{
            if(!operators.empty()){
                if(expr[i]==')'){
                    while(operators.top()!='('){
                        op+=operators.top();
                        operators.pop();
                    }
                    operators.pop();
                }
                else if(precedence[index[operators.top()]][index[expr[i]]]!=1){
                    operators.push(expr[i]);
                }
                else{
                    while(precedence[index[operators.top()]][index[expr[i]]]!=0){
                        op+=operators.top();
                        operators.pop();
                        if(operators.empty()){
                            break;
                        }                        
                    }
                    operators.push(expr[i]);
                }
            }
            else{
                operators.push(expr[i]);
            }
        }
    }
    while(!operators.empty()){
        op+=operators.top();
        operators.pop();
    }
    return op;
}
int evaluate(string expression){
	return postEval(infToPost(expression));
}

char operators[]={'+','-','*','/'};
void generateStrings(int* a,int *c,int start,int end,int val){
    if(start==end){
    	string expression="";
    	int index1=0,index2=0;
    	for(int i=0; i<(2*end+1); i++){
    		if(i%2==0){	
    			expression+=a[index1++]+'0';
    		}
    		else{
    			expression+=operators[c[index2++]];
    		}
       	}
       	if(evaluate(expression)==val){
       		cout<<expression;
       		cout<<endl;
       	}
        return;
    }
    for(int i=0;i<4;i++){
        c[start]=i;
        generateStrings(a,c,start+1,end,val);
    }
}
int main(){
    int k,n;
    cout<<"Enter no of operands:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
   	}
   	int val;
   	cout<<"Enter Value:";
   	cin>>val;
    k=n-1;
    int c[k];
    generateStrings(a,c,0,k,val);
    return 0;
}
