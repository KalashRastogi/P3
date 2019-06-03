#include<stdio.h>
void tower_of_hanoi(int disks, char from, char aux, char to){
    if(disks == 1){
        printf("Move disk 1 from %c to %c \n",from,to);
    }
    else{
        tower_of_hanoi(disks-1, from, to, aux);
        printf("Move disk %d from %c to %c \n", disks, from,to);
        tower_of_hanoi(disks-1, aux, from, to);
    }
}
int main(){
    int disks;
    printf("Enter no. of disks::");
    scanf("%d",&disks);
    tower_of_hanoi(disks,'A','C','B');
}