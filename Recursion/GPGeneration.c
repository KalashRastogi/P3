/*
Generate GP {GeometricProgression} series using recursion
GP: nth term = previous term * common ratio
or
nth term = first term * (common ratio)^(n-1)
i.e. a(n) = a*(r^(n-1))
input: a, n, r
output: no of terms
*/
#include<stdio.h>
void GeometricProgression(int a, int n, int r){
    if(n==0){
        printf("\n");
        return;
    }
    printf("%d ",a);
    GeometricProgression(a*r,n-1,r);
}
int main(){
    int n,a,r;
    printf("Enter first term::");
    scanf("%d",&a);
    printf("Enter no of terms you want to print::");
    scanf("%d",&n);
    printf("Enter common ratio between two consecutive terms::");
    scanf("%d",&r);
    GeometricProgression(a, n, r);
}