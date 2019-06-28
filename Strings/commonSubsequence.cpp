#include<bits/stdc++.h>
using namespace std;
bool commonSub(string s1, string s2, int m, int n){
    if((m-1)<0){
        return true;
    }
    if((n-1)<0){
        return false;
    }
    cout<<m-1<<" "<<s1[m-1]<<" "<<n-1<<" "<<s2[n-1]<<endl;
    if(s1[m-1]==s2[n-1]){
        commonSub(s1, s2, m-1, n-1);
    }
    else{
        commonSub(s1, s2, m, n-1);
    }
}
int main(){
    string s1, s2;
    cin>>s1>>s2;
    int m=s1.length(), n=s2.length();
    if(commonSub(s1, s2, m ,n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
