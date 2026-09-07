#include<stdio.h>
int main(){
    int i,row,column;
    scanf("%d %d",&row,&column);
    for(i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            if(i==1 || j==1 ||j==column ||i==row){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}