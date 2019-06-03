#include<stdio.h>
int main(){
    double epsilon = 0.5,prev_epsilon;
    while(epsilon!=0){
        prev_epsilon = epsilon;
        epsilon = epsilon/2;
    }
    printf("%f",prev_epsilon);

}