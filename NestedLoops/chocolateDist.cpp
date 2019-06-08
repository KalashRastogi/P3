#include<bits/stdc++.h>
using namespace std;
int main(){
    int noOfChocolates,noOfStudents;
    cin>>noOfChocolates;
    cin>>noOfStudents;
    int a[noOfChocolates];
    for(int i=0;i<noOfChocolates;i++){
        cin>>a[i];
    }
    int temp=INT_MAX,index;
    sort(a,a+noOfChocolates);
    for(int i=0;i<(noOfChocolates-noOfStudents);i++){
        if((a[i+noOfStudents]-a[i])<temp){
            temp=a[i+noOfStudents]-a[i];
            index=i;
        }
    }
    for(int i=index;i<index+noOfStudents;i++){
        cout<<a[i]<<" ";
    }
}