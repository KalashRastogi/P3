#include<bits/stdc++.h>
using namespace std;
char operators[]={'+','-','*','/'};
void generateStrings(int* a,int *c,int start,int end){
    if(start==end){
    	int index1=0,index2=0;
    	for(int i=0; i<(2*end+1); i++){
    		if(i%2==0){	
    			cout<<a[index1++];
    		}
    		else{
    			cout<<operators[c[index2++]];
    		}
       	}
    	cout<<endl;
        return;
    }
    for(int i=0;i<4;i++){
        c[start]=i;
        generateStrings(a,c,start+1,end);
    }
}
int main(){
    int k,n;
    cout<<"Enter no of operands:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
   	}
    k=n-1;
    int c[k];
    generateStrings(a,c,0,k);
    return 0;
}
