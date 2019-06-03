#include<stdio.h>
int main(){
    char termPart1 = 'A',termPart2 = 'Z';
    int i;
    for(i=1;i<=14;i++){
        printf("%c%c, ",termPart1,termPart2);
        termPart1+=2;
        termPart2-=1;
    }
    return 0;
}