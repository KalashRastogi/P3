#include<stdio.h>
#include<math.h>
int main(){
    double sum = 0, term,temp=-1;
    int angle,fac=3,i,iterations;
    scanf("%d %d",&angle,&iterations);
    term = (double)(angle*3.14)/180;
    printf("%lf",term);
    sum = term;
    for(i=0;i<iterations;i++){
        term = temp*((term*angle*angle)/(fac*(fac-1)));
        sum+=term;
        fac+=2;
        temp=temp*(-1);
    }
    printf("%lf", sum);
    return 0;
}