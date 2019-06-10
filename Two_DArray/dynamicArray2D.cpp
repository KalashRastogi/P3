/*
here we will first create a array of pointers of size equal to row
and point each row to a one D array of size equal to column

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int **a,**b;
    int row,col;
    cin>>row>>col;
    //using malloc
    /*using double pointer the meaning behind is that if we add 1 in
    this pointer it will skip no of elements (equal to column) and jump to next element of 
    row array */
    a = (int**)malloc(sizeof(int*)*row);
    for(int i=0;i<row;i++){
        a[i] = (int*)malloc(sizeof(int)*col);
    }   
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cin>>row>>col;
    cout<<endl;
    //using new opeartor
    b=new int*[row];
    for(int i=0;i<row;i++){
        b[i]=new int[col];
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}