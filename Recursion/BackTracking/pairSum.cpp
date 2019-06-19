#include <bits/stdc++.h>
using namespace std;
void generatePairs(int* arr,int x,int* pair,int c,int start,int end){
        if(start==2){
            if(arr[pair[0]]+arr[pair[1]]==x){
            	cout<<"("<<arr[pair[0]]<<","<<arr[pair[1]]<<")"<<endl;
            }
            return;
        }
        int p=c;
        for(int i=0;i<=end-p;i++){
            pair[start]=c;
            generatePairs(arr,x,pair,c+1,start+1,end);
            c++;
        }
}
int main(){
    int k=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int pair[2];
    generatePairs(arr,x,pair,0,0,n);
    return 0;
}
