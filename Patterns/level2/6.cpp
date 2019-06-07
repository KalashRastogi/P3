#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, number=1,sub;
    cin>>n;
    sub=n+1;
    for(int i=1;i<2*n;i++){
        if(i==n){
           for(int i=n;i>=1;i--){
               cout<<i;
           } 
           number=n-1;
        }
        else if(i<n){
            for(int j=1;j<=n;j++){
                if(j==1){
                    cout<<number;
                }
                else if(j==n){
                    cout<<sub-number;
                }
                else{
                    cout<<" ";
                }
            }
            number++;
        }
        else{
            for(int j=1;j<=n;j++){
                if(j==1){
                    cout<<number;
                }
                else if(j==n){
                    cout<<sub-number;
                }
                else{
                    cout<<" ";
                }
            }
            number--;
        }
        cout<<endl;
    }
}