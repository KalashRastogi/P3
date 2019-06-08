#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,Lsum=0,Rsum=0;
    bool flag=true;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n && flag;i++){
        for(int j=0;j<n && flag;j++){
            for(int k=0;k<n && flag;k++){
                if((i!=j)&&(j!=k)&&(i!=k)){
                    if((x[i]*x[i])==(x[j]*x[j])+(x[k]*x[k])){
                        cout<<"true";
                        flag=false;
                        break;
                    }
                }
            }
        }
    }
}