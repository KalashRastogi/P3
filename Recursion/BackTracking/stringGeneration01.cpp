#include<bits/stdc++.h>
using namespace std;
void generateStrings(char *s,int k){
    cout<<k<<endl;
    if(k==-1){
        cout<<s<<endl;
        return;
    }
    s[k]='0';
    generateStrings(s,k-1);
    s[k]='1';
    generateStrings(s,k-1);
}
int main(){
    int k;
    cin>>k;
    char str[k+1];
    str[k]='\0';
    generateStrings(str,k-1);
    return 0;
}