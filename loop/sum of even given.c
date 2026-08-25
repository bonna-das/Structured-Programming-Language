#include<stdio.h>
int main(){
    int n,ld=0,sum=0;//ld=last digit
    scanf("%d",&n);
    while(n!=0){
        ld=n%10;
        if(ld%2==0){
            sum+=ld;
        }
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}