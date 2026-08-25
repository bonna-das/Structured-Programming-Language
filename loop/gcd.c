#include<stdio.h>
int main(){
    int n,m,l,gcd=1;
    scanf("%d %d %d",&n,&m,&l);
    for(int i=1;i<=100;i++){
        if((n%i)==0 && (m%i)==0 && (l%i)==0){
            gcd=gcd*i;
        }
       

    }
     printf("%d",gcd);
    
}