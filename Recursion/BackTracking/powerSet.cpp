#include<bits/stdc++.h>
using namespace std;
void powerSet(string inStr,int posn, int len, string outStr) {
  if(posn==len){
    if(outStr==""){
      cout<<"Null string";
    }
    cout<<outStr<<endl;
    return;
  }
  powerSet(inStr,posn+1,len,outStr);
  outStr+=(inStr[posn]);
  powerSet(inStr,posn+1,len,outStr);

}
int main(){
  string inputStr,outputStr="";
  cin>>inputStr;
  powerSet(inputStr, 0, inputStr.length(), outputStr);
  return 0;
}
