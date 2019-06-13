#include<bits/stdc++.h>
using namespace std;
int main(){
    int countSmall[26]={0},in,max=INT_MIN;
    char *str,c;
    str=(char*)malloc(sizeof(char));
    int index=0,len=1;
    while((c=getchar())!='\n'){
        str[index]=c;
        countSmall[c-'a']++;
        if(countSmall[c-'a']>max){
            max=countSmall[c-'a'];
            in=c-'a';
        }
        index++;
        str=(char*)realloc(str,(len+=index)*sizeof(char));
    }
    cout<<(char)(in+'a');
    free(str);
    return 0;
}
