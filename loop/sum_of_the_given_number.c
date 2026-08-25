#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n!=0){
    
        int x=n%10;
        printf("%d+",x);
        if(x==1){
        printf("%d=",x);
    }
        
            n=n/10;
            

    }
    
}