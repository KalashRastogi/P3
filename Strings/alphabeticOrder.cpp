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
    int i;
    for(i=0;i<index-1;i++){
        if(str[i]<=str[i+1])
            continue;
        else{
            cout<<"No";
            break;
        }
    }
    if(i==index-1){
        cout<<"Yes";
    }
    free(str);
    return 0;
}
