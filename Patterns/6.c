#include<stdio.h>
int main(){
    int i,j,toPrint = 1, no_rows,counter=1;
    printf("Enter no. of rows::");
    scanf("%d",&no_rows);
    for(i=1;i<=no_rows;i++){
        for(j=1;j<=toPrint;j++){
            if(i%2!=0)
                printf("%d",counter);
            else
                printf("-%d",counter);
            counter++;
        }
        printf("\n");
        toPrint++;
    }
    return 0;
}