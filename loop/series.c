#include<stdio.h>
int main(){
    int n;
    printf("Input the n");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2){//2n-1=nth number digit;nth number series= a+(n-1)d
        printf("%d ",i);
    }
    return 0;
}