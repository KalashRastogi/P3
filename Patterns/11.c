#include<stdio.h>
#include<math.h>
int main(){
    double angle, sum , term;
    int i,iterations;
    scanf("%lf %d",&angle,&iterations);
    term = (double)(angle*3.14)/180;
    angle = term;
    sum = term;
    for(i=2;i<=iterations;i++){
        term = -1*((term*angle*angle)/((2*i-1)*(2*i-2)));
        sum+=term;
    }
    printf("%lf", sum);
    return 0;
}