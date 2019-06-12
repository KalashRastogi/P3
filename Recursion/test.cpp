#include<bits/stdc++.h>
using namespace std;
void rotateString(char *s,int start,int end){
    if(start==end){
        return;
    }
    cout<<s[start]<<start<<end<<endl;
    s[(start-1)==-1?(end-1):(start-1)]=s[start];
    rotateString(s,start+1,end);
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
    rotateString(str,0,strlen(str));
    cout<<str;
    return 0;
}