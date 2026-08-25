#include<stdio.h>
int main(){
    int n,m=1,sum=0,x=0;
    scanf("%d",&n);
    for (int i=0;i<=(n);i++){
       
        sum=m+i;
        
        if(i<n){
        printf("%d*%d+",sum,sum);
         }
         else{
            printf("%d*%d=",sum,sum);
         }
         m=sum;
         x=x+sum*sum;
       
    }
    printf("%d",x);
     
}