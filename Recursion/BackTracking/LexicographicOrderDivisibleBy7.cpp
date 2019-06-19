#include<bits/stdc++.h>
using namespace std;
void generateStrings(char *c,int start,int end){
    if(start==end){
        c[end]='\0';
        if(stoi(c)%7==0){
            cout<<c<<endl;
        }
        return;
    }
    for(int i=1;i<=9;i++){
        c[start]='0'+i;
        generateStrings(c,start+1,end);
    }
}
int main(){
    int k;
    cin>>k;
    char c[k+1];
    generateStrings(c,0,k);
    return 0;
}