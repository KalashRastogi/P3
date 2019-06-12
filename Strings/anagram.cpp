#include<bits/stdc++.h>
using namespace std;
int main(){
    char *str1,*str2,c;
    str1=(char*)malloc(sizeof(char));
    int index=0,len=1;
    while((c=getchar())!='\n'){
        str1[index]=c;
        index++;
        str1=(char*)realloc(str1,(len+=index)*sizeof(char));
    }
    str2=(char*)malloc(sizeof(char));
    index=0,len=1;
    while((c=getchar())!='\n'){
        str2[index]=c;
        index++;
        str2=(char*)realloc(str2,(len+=index)*sizeof(char));
    }
    int len1=strlen(str1),len2=strlen(str2);
    sort(str1,str1+len1);
    sort(str2,str2+len2);
    int i;
    for(i=0;i<len1;i++){
        if(str1[i]!=str2[i]){
            cout<<"Not";
            break;
        }
    }
    if(i==len1){
        cout<<"Yes";
    }
    return 0;
}