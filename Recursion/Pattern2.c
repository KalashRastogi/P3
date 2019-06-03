/*
code to print following pattern using recursion:
1
2 3
4 5 6 
7 8 9 10
..
input will be number of rows
output will the pattern
*/
#include<stdio.h>
void numberPattern(int s, int n){
    int i=0;
    int first_no = ((s*(s+1))/2)+1;
    if(s==n){
        return;
    }
    for(i=0;i<=s;i++){
        printf("%d",first_no);
        first_no+=1;
    }
    printf("\n"); 
    numberPattern(s+1,n);
}
int main(){
    int no_of_rows,start = 0;
    printf("Enter no of rows::");
    scanf("%d",&no_of_rows);
    numberPattern(start, no_of_rows);
}