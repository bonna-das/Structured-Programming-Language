#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>99 && x<1000){
        printf("This is a three digit number");
    }
    else{
        printf("This is not a three digit number");
    }
    return 0;
}