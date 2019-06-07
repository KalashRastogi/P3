#include<bits/stdc++.h>
using namespace std;
int main(){
    int first=1,second=1;
    bool odd=true;
    int n;
    cin>>n;
    if(n==1){
        cout<<first;
    }
    else if(n==2){
        cout<<second;
    }
    else{
        int i=3;
        while(i<=n){
            if(i%2!=0){
                first*=2;
            }
            else{
                second*=3;
            }
            i++;
        }
        if(n%2==0){
            cout<<second;
        }
        else{
            cout<<first;
        }
    }
    return 0;
}