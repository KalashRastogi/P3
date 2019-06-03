#include<stdio.h>
int main(){
    int i,prev_term=2,common_ratio=2,n,next_term;
    long int sum=prev_term;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        next_term = prev_term * common_ratio;
        sum+=next_term;
        prev_term = next_term;
    }
    printf("%ld",sum);
    return 0;
}