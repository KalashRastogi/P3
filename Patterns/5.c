#include<stdio.h>
int main(){
    int i,j,lim,toPrint = 1, no_rows,counter=1;
    printf("Enter no. of rows::");
    scanf("%d",&no_rows);
    for(i=1;i<=no_rows;i++){
        lim = (i*(i+1))/2;
        for(j=1;j<=toPrint;j++){
            printf("%d",lim);
            lim--;
        }
        printf("\n");
        toPrint++;
    }
    return 0;
}