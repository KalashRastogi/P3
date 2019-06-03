#include<stdio.h>
int main(){
    int i,j,toPrint = 1, no_rows,counter=0,a[]={0,1};
    printf("Enter no. of rows::");
    scanf("%d",&no_rows);
    for(i=1;i<=no_rows;i++){
        for(j=1;j<=toPrint;j++){
            printf("%d",a[counter%2]);
            counter++;
        }
        printf("\n");
        toPrint++;
    }
    return 0;
}