#include<stdio.h>
int main(){
    int i, n;
    scanf("%d ",&n);
    for(i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==(n+1)/2 || i==(n+1)/2){
                printf("*");
        }
            else{
                printf(" ");
            }
            

        }
        printf("\n");
}
}
