#include<stdio.h>
int main(){
    int i,no1,no2,no3,n,d,a,sum=0;
    scanf("%d %d %d %d",&n,&no1,&no2,&no3);
    d = no2-no1;
    if((no2-no1) != (no3-no2)){
        printf("Invalid!");
    }
    else{
        printf("%d %d %d ",no1, no2, no3);
        sum = no1+no2+no3;
        for(i=4;i<=n;i++){
            printf("%d ",(no1+(i-1)*d));
            sum+=(no1+(i-1)*d);
        }
        printf("\n%d ",sum);
    }
    return 0;
}