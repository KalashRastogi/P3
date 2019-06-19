#include<bits/stdc++.h>
using namespace std;
void generateStrings(char *c,int start,int end){
    if(start==end){
        c[end]='\0';
        cout<<c<<endl;
        return;
    }
    if(c[start-1]=='1'){
        c[start]='0';
        generateStrings(c,start+1,end);
    }
    else{
        c[start]='0';
        generateStrings(c,start+1,end);
        c[start]='1';
        generateStrings(c,start+1,end);
    }
}
int main(){
    int k;
    cin>>k;
    char c[k+1];
    c[0]='0';
    generateStrings(c,1,k);
    c[0]='1';
    generateStrings(c,1,k);
    return 0;
}