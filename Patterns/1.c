#include<stdio.h>
int main(){
    int i,j,toPrint = 1, no_rows;
    printf("Enter no. of rows::");
    scanf("%d",&no_rows);
    for(i=1;i<=no_rows;i++){
        for(j=1;j<=toPrint;j++){
            printf("*");
        }
        printf("\n");
        toPrint++;
    }
    return 0;
}