#include<stdio.h>
int main(){
    int i,prev_term=2,common_ratio=2,n,next_term;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        next_term = prev_term * common_ratio;
        prev_term = next_term;
    }
    printf("%d",next_term);
    return 0;
}