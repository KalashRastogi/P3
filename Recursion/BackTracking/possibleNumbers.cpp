#include<bits/stdc++.h>
using namespace std;
void generateNumbers(char* target,char* digits,int start,int end){
    if(start==end){
        target[end]='\0';
        cout<<target<<endl;
        return;
    }
    if(start==0){
        for(int i=1;i<=9;i++){
            target[start]=digits[i];
            generateNumbers(target,digits,start+1,end);
        }
    }
    else{
        for(int i=0;i<=9;i++){
            target[start]=digits[i];
            generateNumbers(target,digits,start+1,end);
        }
    }
}
int main(){
    char digits[]={'0','1','2','3','4','5','6','7','8','9'};
    int k;
    cin>>k;
    char target[k+1];
    if(k==1){
        cout<<"0"<<endl;
    }
    generateNumbers(target,digits,0,k);
    return 0;
}