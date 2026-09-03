#include<stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    for( i=1;i<=n;i++){
        if(i%2==0){
            sum=sum+i; 
        }
        else{
             continue;
        }
    }
    printf("%d",sum/n/2);
}