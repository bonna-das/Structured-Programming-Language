#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=9;i++){
        printf("*");
        if(i==3 || i==6 ||i==9){
            printf("\n");
        }
    }
}