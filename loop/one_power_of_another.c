#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int s=1;
    for(int i=1;i<=b;i++){
        s=s*a;

    }
            printf("%d",s);
}