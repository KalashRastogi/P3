#include<bits/stdc++.h>
using namespace std;
void generateStrings(char *c,int start,int end){
    cout<<start<<" "<<end<<endl;
    if(start==end){
        c[end]='\0';
        cout<<c<<endl;
        return;
    }
    c[start]='0';
    generateStrings(c,start+1,end);
    c[start]='1';
    generateStrings(c,start+1,end);
}
int main(){
    int k;
    cin>>k;
    char c[k+1];
    generateStrings(c,0,k);
    return 0;
}