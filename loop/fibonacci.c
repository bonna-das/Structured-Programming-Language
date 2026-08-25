#include<stdio.h>
int main(){
    int a=1,b=0,sum,n;
    scanf("%d",&n);
    
    
    for( int i=1;i<=n;i++){
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
        
        
    }
    
    
}