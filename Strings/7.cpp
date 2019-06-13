/*
Incomplete!
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char *str,c;
    str=(char*)malloc(sizeof(char));
    int index=0,len=1;
    while((c=getchar())!='\n'){
        str[index]=c;
        index++;
        str=(char*)realloc(str,(len+=index)*sizeof(char));
    }
    int dot=0,i;
    bool valid=true;
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]>='0' && str[i]<='9'){
            valid=false;
            break;
        }
        if(str[i]=='.'){
            break;
        }
    }
    if(!valid){
        cout<<"Invalid!";
    }
    else if(valid && i==len){
        cout<<"Valid!";
    }
    else{

    }
    free(str);
    return 0;
}
