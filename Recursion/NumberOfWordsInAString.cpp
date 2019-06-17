#include<bits/stdc++.h>
using namespace std;
int noWords(string str,int start,int end){
    if(start==end){
        return 1;
    }
    if((str[start+1]!=' '||str[start+1]!='\0') && str[start]==' '){
        return noWords(str,start+1,end)+1;
    }
    return noWords(str,start+1,end);
}
int main(){
    char c;
    string str="";
    while((c=getchar())!='\n'){
        str+=c;
    }
    cout<<noWords(str,0,str.length());
    return 0;
}