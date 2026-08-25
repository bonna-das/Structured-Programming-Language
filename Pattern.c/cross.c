#include<stdio.h>
int main(){
    int i,n,row,column;
    scanf("%d",&n);
    row=n;
    column=n;
    for(i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            if(i==j || i+j==n+1){
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
}