/*
Generate AGP {ArithmeticGeometricProgression} series using recursion
GP: a, (a+d)r, (a+2d)r^2, ..., [a+(n-1)d]r^(n-1)
i.e. a(n) = [a+(n-1)d]r^(n-1)
input: a, n, r, d
output: no of terms
*/
#include<stdio.h>
void AGeometricProgression(int a, int n, int r, int d){
    if(n==0){
        printf("\n");
        return;
    }
    printf("%d ",a*);
    AGeometricProgression((a+d),n-1,(r*r),d);
}
int main(){
    int n, a, r, d;
    printf("Enter first term::");
    scanf("%d",&a);
    printf("Enter no of terms you want to print::");
    scanf("%d",&n);
    printf("Enter common ratio between two consecutive terms::");
    scanf("%d",&r);
    printf("Enter difference between two consecutive terms::");
    scanf("%d",&d);
    printf("%d ", a*r);
    AGeometricProgression((a+d), n-1, (r*r), d);
}