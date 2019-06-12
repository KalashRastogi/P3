#include<bits/stdc++.h>
using namespace std;
void rotateString(char *s,int start,int end,char last){
    if(start==end){
        s[end-2]=last;
        return;
    }
    s[(start-1)==-1?(end-1):(start-1)]=s[start];
    rotateString(s,start+1,end,last);
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
    len=strlen(str);
    rotateString(str,0,len,str[len-1]);
    cout<<str;
    return 0;
}