#include<bits/stdc++.h>
using namespace std;
bool pallin(char *c,int index){
    for(int i=0,j=index-1;i<j;i++,j--){
        if(c[i]!=c[j])
            return false;
    }
    return true;
}
int main(){
    char *str,*pattern,c;
    str=(char*)malloc(sizeof(char));
    int index=0,len=1;
    while((c=getchar())!='\n'){
        str[index]=c;
        index++;
        str=(char*)realloc(str,(len+=index)*sizeof(char));
    }
    if(pallin(str,index)){
        cout<<"Pallindrome";
    }
    else{
        cout<<"Not a pallindrome";
    }
    return 0;
}