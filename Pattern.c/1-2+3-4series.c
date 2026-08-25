#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d",i);
        if(i%2==0){
            printf("+");
        }
        else if(i==n){
            printf("");
        }
        else{
            printf("-");
        }
    }
}