/*Characters should not be in repeated manner */
#include <bits/stdc++.h>
using namespace std;
int countN=0;
void permuteString(string target,string str,int start, int end){
    if(start==end){
        cout<<target;
        cout<<endl;
        return;
    }
    bool repeat=false;
    for(int i=0;i<end;i++){
       repeat=false;
       for(int j=0;j<start;j++){
           if(str[i]==target[j]){
               repeat=true;
           }
       }
       if(!repeat){
            target[start]=str[i];
            permuteString(target,str,start+1,end);
       }
    }    
}
int main(){
    string str,target;
    cin>>str;
    target=str;
    permuteString(target,str,0,str.length());
    return 0;
}