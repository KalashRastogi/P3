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
    len=strlen(str);
    for(int i=0;i<=len-1;i++){
        string p="";
        for(int j=i;j<=len-1;j++){
            p=p+str[j];
            cout<<p<<endl;
        }
    }
    return 0;
}