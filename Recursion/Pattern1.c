/*
code to print following pattern using recursion:
*
**
***
****
..
input will be number of rows
output will the pattern
*/
#include<stdio.h>
void pattern(int s, int n){
    int i=0;
    if(s==n+1){
        return;
    }
    for(i=0;i<s;i++){
        printf("*");
    }
    printf("\n");
    pattern(s+1,n);
}
int main(){
    int no_of_rows,start = 1;
    printf("Enter no of rows::");
    scanf("%d",&no_of_rows);
    pattern(start, no_of_rows);
}