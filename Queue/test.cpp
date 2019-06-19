#include<bits/stdc++.h>
using namespace std;
void printMat(int* p,int a,int b){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<*((p+i)+j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    printMat((int*)a,3,3);
    return 0;
}