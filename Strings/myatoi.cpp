#include<bits/stdc++.h>
using namespace std;
int myatoi(char *c){
    int num=0;
    int len=strlen(c);
    for(int i=0;i<len;i++){
        if(c[i]>='0' && c[i]<='9') 
            num=(num*10)+((int)c[i]-'0');
        else
            return -1;
    }
    return num;
}
int main(){
    char c[100];
    cin>>c;
    cout<<myatoi(c);
    return 0;
}