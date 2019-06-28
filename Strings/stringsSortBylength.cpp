#include<bits/stdc++.h>
using namespace std;
bool compare(string& s1,string& s2){
    return s2.size() > s1.size();
}
int main(){
    string str[]={"Abhishek","Abhis","Abhi"};
    sort(str,str+3,compare);
    cout<<str[0]<<" ";
    cout<<str[1]<<" ";
    cout<<str[2];
    return 0;
}
