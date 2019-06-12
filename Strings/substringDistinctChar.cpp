#include<bits/stdc++.h>
using namespace std;
string distinctChar(string p){
    string st;
    char prev;
    int index=1;
    prev=p[0];
    st=prev;
    for(int i=1;i<p.length();i++){
        if(p[i]==prev){
            continue;
        }
        else{
            st=st+(p[i]);
            prev=p[i];
        }
    }
    return st;
}
int main(){
    char *str,c;
    str=(char*)malloc(sizeof(char));
    int index=0,len=1;
    while((c=getchar())!='\n'){
        str[index]=c;
        index++;
        str=(char*)realloc(str,(len+=index)*sizeof(char));
    }
    int max=INT_MIN;
    len=strlen(str);
    string temp="";
    for(int i=0;i<=len-1;i++){
        string p="";
        for(int j=i;j<=len-1;j++){
            p=p+str[j];
            cout<<distinctChar(p);
        }
    }
    return 0;
}