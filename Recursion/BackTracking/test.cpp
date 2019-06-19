#include<bits/stdc++.h>
using namespace std;
/* char phone[10][5]={
    "","","abc","def","ghi","jkl","mno","pqr","tuv","wxy"
};*/
char phone[10][5]={
    "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
};
void generateStrings(string keys, int* index, int start, int end){
    if(start==end){
        cout<<"->";
        for(int i=0;i<end;i++){
            //cout<<index[i]<<" <"<<keys[i]<<">,";
            cout<<phone[keys[i]-'0'][index[i]];
        }
        cout<<endl;
        return;
    }
    if(keys[start]=='7'||keys[start]=='9'){
        for(int i=0;i<4;i++){
        index[start]=i;
        generateStrings(keys,index,start+1,end);
        }
    }    
    else{
        for(int i=0;i<3;i++){
            index[start]=i;
            generateStrings(keys,index,start+1,end);
        }
    }
}
int main(){
    bool change=false;
    string str;
    cout<<"enter phone number:";
    cin>>str;
    int len=str.length();
    int index[len];
    for(int i=0;i<len;i++){
        if(str[i]=='7'||str[i]=='9'){
            change=true;
        }
    }
    generateStrings(str,index,0,len);
    return 0;
}