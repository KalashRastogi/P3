/*
Generate AP series using recursion
AP: nth term = first term + (no_terms-1)*(difference between two consecutive terms)
i.e. a(n) = a + (n-1)*d
input: a, n, d
output: no of terms
*/
#include<stdio.h>
void ArithmeticProgression(int a, int n, int d){
    if(n==0){
        printf("\n");
        return;
    }
    printf("%d ",a);
    ArithmeticProgression(a+d,n-1,d);
}
int main(){
    int n,a,d;
    printf("Enter first term::");
    scanf("%d",&a);
    printf("Enter no of terms you want to print::");
    scanf("%d",&n);
    printf("Enter difference between two consecutive terms::");
    scanf("%d",&d);
    ArithmeticProgression(a, n, d);
}