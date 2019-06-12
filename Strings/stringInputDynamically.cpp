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
    cout<<str<<endl;
    cout<<strlen(str);
    free(str);
    return 0;
}
