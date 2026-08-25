#include<stdio.h>
int main(){
    int n,sum=0,remaining=0;
    scanf("%d",&n);
    for(int i=1;n!=0;i++){
        remaining=n%10;
        sum+=(remaining);
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}