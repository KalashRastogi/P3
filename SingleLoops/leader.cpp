#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    int n,i,max;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    max=array[n-1];
    for(int i=n-2;i>=0;i--){
        if(max<array[i]){
            cout<<max;
            max = array[i];
        }
    }
    return 0;
}
