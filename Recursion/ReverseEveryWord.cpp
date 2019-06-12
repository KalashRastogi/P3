#include<bits/stdc++.h>
using namespace std;
void revString(char *s,int start, int end){
    if(start>=end){
        return;
    }
    swap(s[start],s[end]);
    revString(s,start+1,end-1);
}
void revWord(char *str,int start,int end){
    int temp=0;
    for(int i=start;i<=end;i++){
        if(str[i+1]==' ' || str[i+1]=='\0'){
            revString(str,temp,i);
            temp=i+2;
        }
    }
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
    revWord(str,0,strlen(str)-1);
    cout<<str;
    return 0;
}