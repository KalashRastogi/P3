#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,loop=2;
    cin>>n;
    int arr[n],max,min,inMax,inMIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr[0]>=arr[1]?max=arr[0],min=arr[1]:min=arr[0],max=arr[1];
    if(n%2!=0){
        if(arr[2]>max){
            max=arr[2];
        }
        if(arr[2]<min){
            min=arr[2];
        }
        loop=3;
    }
    for(int i=loop;i<n;i=i+2){
        if(arr[i]>arr[i+1]){
            inMax=arr[i];
            inMIN=arr[i+1];
        }
        else{
            inMax=arr[i+1];
            inMIN=arr[i];
        }
        if(inMax>max){
            max=inMax;
        }
        if(inMIN<min){
            min=inMIN;
        }
    }
    cout<<"Max:"<<max<<endl<<"Min:"<<min<<endl;
}