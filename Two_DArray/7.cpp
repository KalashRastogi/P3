#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,sum=0;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int max1=INT_MIN,min=INT_MAX,minIndex,maxIndex;
    for(int i=0;i<m;i++){
        sum=0;
        for(int j=0;j<n;j++){
            sum+=a[i][j];
        }
        if(sum<min){
            min=sum;
            minIndex=i;
        }
        if(sum>max1){
            max1=sum;
            maxIndex=i;
        }
    }
    cout<<minIndex<<" "<<maxIndex;
    return 0;
}