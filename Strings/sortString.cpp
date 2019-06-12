#include <bits/stdc++.h>
using namespace std;
int main(){
    char *str,*sorted,c;
    int count[26]={0};
    str=(char*)malloc(sizeof(char));
    int index=0,len=1;
    while((c=getchar())!='\n'){
        count[(int)(c-'a')]++;
        str[index]=c;
        index++;
        str=(char*)realloc(str,(len+=index)*sizeof(char));
    }
    sorted = (char*) malloc(sizeof(char)*len);
    for(int i=1;i<26;i++){
        count[i]+=count[i-1];
    }
    int ind=0;
    for(int i=len-1;i>=0;i--){
        ind = (count[str[i]-'a']--)-1;
        sorted[ind]=str[i];
    }
    cout<<sorted;
    return 0;
}