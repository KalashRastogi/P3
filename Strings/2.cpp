#include<bits/stdc++.h>
using namespace std;
int main(){
    char *str,c;
    str=(char*)malloc(sizeof(char));
    int index=0,len=1,count=0;
    while((c=getchar())!='\n'){
        (c>='0'&&c<='9')?count++:count;
        str[index]=c;
        index++;
        str=(char*)realloc(str,(len+=index)*sizeof(char));
    }
    cout<<count;
    free(str);
    return 0;
}
