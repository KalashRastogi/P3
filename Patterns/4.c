#include<stdio.h>
int main(){
    int i,j,lim,lim1,toPrint = 1, no_rows,counter=1;
    printf("Enter no. of rows::");
    scanf("%d",&no_rows);
    for(i=1;i<=no_rows;i++){
        lim = (i*(i+1))/2;
        if(i%2==0){
            for(j=1;j<=toPrint;j++){
                printf("%d",lim);
                lim--;
            }
        }
        else{
            lim1 = (((i-1)*(i))/2)+1;
            for(j=lim1;j<=lim;j++){
                printf("%d",j);
            }
        }
        printf("\n");
        toPrint++;
    }
    return 0;
}