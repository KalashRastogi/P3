#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,i;
    cin>>n;
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    int sq=sqrt(n);
    for(i=2;i<=sq;i++){
        if(prime[i]==true){
            for(int j=2*i;j<=n;j=j+i){
                prime[j]=false;  
            }    
        }
        if(prime[i]==true){
            cout<<i<<" ";
        }
    }
    return 0;
}