#include<bits/stdc++.h>
using namespace std;
int substr(char *s1, char*s2){
    int len1=strlen(s1),len2=strlen(s2);
    for(int i=0;i<len1;i++){
        if(s1[i]!=s2[0]){
            continue;
        }
        else{
            int j,temp=i;
            for(j=0;j<len2;j++){
                if(s1[i]!=s2[j]){
                    break;
                }
                i++;
            }
            if(j==len2){
                return temp;
            }
        }
    }
    return -1;
}
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
    cout<<substr(str1,str2);
    free(str1);
    free(str2);
    return 0;
}
