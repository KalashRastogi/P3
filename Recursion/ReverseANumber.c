#include<stdio.h>
int reverse(int num,int rev){
    if(num==0){
        return rev;
    }
    return reverse(num/10,rev*10 + num%10);
}
int main(){
    int num,rev=0;
    scanf("%d",&num);
    printf("%d",reverse(num,rev));
    return 0;
}