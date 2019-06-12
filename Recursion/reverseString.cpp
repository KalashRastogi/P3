#include<bits/stdc++.h>
using namespace std;
void revString(string &str,int start, int end){
    if(start>=end){
        return;
    }
    swap(str[start],str[end]);
    revString(str,start+1,end-1);
}
int main(){
    string str;
    cin>>str;
    revString(str,0,str.length()-1);
    cout<<str;
    return 0;
}