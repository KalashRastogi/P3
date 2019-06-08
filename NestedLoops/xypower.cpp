#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,counter=0;
    cin>>m>>n;
    int x[m],y[n];
    for(int i=0;i<m;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        cin>>y[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(pow(x[i],y[i])>pow(y[i],x[i])){
                counter++;
            }
        }
    }
    cout<<counter;
}