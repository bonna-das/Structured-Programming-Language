#include<stdio.h>
int main(){
    int i,row,column;
    scanf("%d %d",&row,&column);
    int star=column;
    int space=0; 
   for(i=1;i<=row;i++){
    for(int j=1;j<=space;j++){
        printf(" ");
    }
    for(int k=1;k<=star;k++){
        printf("*");
    }
    printf("\n");
    space++;
    star--;
   }
}