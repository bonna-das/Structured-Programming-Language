#include<stdio.h>
int main(){
    int item=50;
    float cost_per=9.99;
    float total=item*cost_per;
    char dollar='$';

    printf("Total cost=%.2f%c",total,dollar);
    return 0;
}