#include<bits/stdc++.h>
using namespace std;
int main(){
    int num_rows,spaces=0;
    cin>>num_rows;
    for(int i=1;i<=num_rows;i++){
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int k=1;k<=num_rows;k++){
            if(i==1 || i==num_rows)
                cout<<"*";
            else if(k==1 || k==num_rows){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        spaces++;
        cout<<endl;
    }
    return 0;
}