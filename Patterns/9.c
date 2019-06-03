#include<stdio.h>
int main(){
    int i,j,toPrint = 1, no_rows, nSpaces;
    printf("Enter no. of rows::");
    scanf("%d",&no_rows);
    nSpaces = no_rows-1;
    for(i=1;i<=no_rows;i++){
        for(j=1;j<=nSpaces;j++){
            printf(" ");
        }
        for(j=1;j<=toPrint;j++){
            if(j==1 || j==toPrint)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        toPrint+=2;
        nSpaces--;
    }
    nSpaces = 1;
    toPrint-=4;
    for(i=1;i<=no_rows-1;i++){
        for(j=1;j<=nSpaces;j++){
            printf(" ");
        }
        for(j=1;j<=toPrint;j++){
            if(j==1 || j==toPrint)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        toPrint-=2;
        nSpaces++;
    }
    return 0;
}