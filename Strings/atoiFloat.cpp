#include<bits/stdc++.h>
using namespace std;
float myatoiFloat(char *c){
    int num=0,count=0;
    float decimal=0;
    int i,len=strlen(c);

    for(i=0;(c[i]!='\0');i++){
        if(c[i]=='.')
            break;
        if(c[i]>='0' && c[i]<='9') 
            num=(num*10)+((int)c[i]-'0');
        else{
            return -1;
        }
    }
    if(i!=len-1){
        i++;
        for(;c[i]!='\0';i++){
            if(c[i]=='.'){
                return -1;
            }
            if(c[i]>='0' && c[i]<='9')
                decimal=(decimal*10)+((int)c[i]-'0');
            else
                return -1;
            count++;
        }

    }
    return num+(decimal*pow(10,-count));
}
int main(){
    char c[100];
    cin>>c;
    cout<<myatoiFloat(c);
    return 0;
}