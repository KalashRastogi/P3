#include<bits/stdc++.h>
using namespace std;
int m;
bool checkPair(char *c,char x,char y,int len){
    int index1,index2;
    for(int i=len-1;i>=0;i--){
        if(c[i]==x){
            index1=i;
            break;
        }
    }
    for(int i=0;i<=len-1;i++){
        if(c[i]==y){
            index2=i;
            break;
        }
    }
    if(index1<index2){
        return true;
    }
    return false;
}
int main(){
    char *str,*pattern,c;
    str=(char*)malloc(sizeof(char));
    int index=0,len=1;
    while((c=getchar())!='\n'){
        str[index]=c;
        index++;
        str=(char*)realloc(str,(len+=index)*sizeof(char));
    }
    pattern=(char*)malloc(sizeof(char));
    index=0,len=1;
    while((c=getchar())!='\n'){
        pattern[index]=c;
        index++;
        pattern=(char*)realloc(pattern,(len+=index)*sizeof(char));
    }
    int len1=strlen(str);
    int len2=strlen(pattern);
    int i;
    for(i=0;i<len2-1;i++){
        if(!checkPair(str,pattern[i],pattern[i+1],len1)){
            cout<<"not in order";
            break;
        }
    }
    if(i==len2-1){
        cout<<"in order";
    }
    return 0;
}