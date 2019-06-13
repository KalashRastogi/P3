#include<bits/stdc++.h>
using namespace std;
int main(){
    char *str,c;
    str=(char*)malloc(sizeof(char));
    int index=0,len=1,count=0;
    while((c=getchar())!='\n'){
        str[index]=c;
        (str[index]!=' ' && str[index-1]==' ')?count++:count;
        index++;
        str=(char*)realloc(str,(len+=index)*sizeof(char));
    }
    cout<<count+1;
    free(str);
    return 0;
}
