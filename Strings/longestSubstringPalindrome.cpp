#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
bool pallin(string c,int index){
    for(int i=0,j=index-1;i<j;i++,j--){
        if(c[i]!=c[j])
            return false;
    }
    return true;
}
int main(){
    char *str,c;
    str=(char*)malloc(sizeof(char));
    int index=0,len=1;
    while((c=getchar())!='\n'){
        str[index]=c;
        index++;
        str=(char*)realloc(str,(len+=index)*sizeof(char));
    }
    len=strlen(str);
    string temp="",p="";
    int max=INT_MIN;
    for(int i=0;i<=len-1;i++){
        p="";
        for(int j=i;j<=len-1;j++){
            p=p+str[j];
            if(pallin(p,p.length())&&(int)p.length()>max){
                    max=p.length();
                    temp=p;
            }
        }
    }
    if(temp.length()==0){
        cout<<"No such substring";
    }
    else{
        cout<<temp;
    }
    return 0;
}