#include<stdio.h>
int main(){
    int i,n,first_term = 2,second_term = 10;
    long int sum=0;
    scanf("%d",&n);
    n*=2;
    sum = first_term + second_term;
    for(i=3;i<=n;i++){
        if(i%2!=0){
            first_term*=3;
            sum+=first_term;
        }
        else{
            second_term*=2;
            sum+=second_term;
        }
    }
    printf("%ld",sum);
    return 0;
}