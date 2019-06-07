#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int temp=num;
    for(int i=1;i<=num+1;i++){
        for(int j=1;j<=i;j++){
            cout<<temp;
        }
        temp++;
        cout<<endl;
    }
    temp-=2;
    for(int i=1;i<=num;i++){
        for(int j=i;j<=num;j++){
            cout<<temp;
        }
        cout<<endl;
        temp--;
    }
    return 0;
}