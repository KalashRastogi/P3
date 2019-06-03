#include<stdio.h>
int main(){
    double sum = 0, term = 1,epsilon = __DBL_EPSILON__;
    int x,fac=2;
    scanf("%d",&x);
    term = x;
    sum = term+1;
    while(term > epsilon){
        term = ((term*x)/(fac));
        sum+=term;
        fac++;
    }
    printf("%lf", sum);
    return 0;
}