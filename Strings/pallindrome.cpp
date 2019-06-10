#include<bits/stdc++.h>
using namespace std;
int myatoi(char *c){
    int num;
    int len=strlen(c);
    for(int i=0;i<len-1;i++){
        num=(num*10)+(c[i]-'0');
    }
    return num;
}
int main(){
    char c[100];
    cin>>c;
    cout<<myatoi(c);
    return 0;
}