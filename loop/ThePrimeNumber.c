#include<stdio.h>
int main(){
    int n,i;
    int a=0;
    scanf("%d",&n);
    for(i=2;i<=n-1;i++){
        if(n%i==0){
              a=1;
              break;//break jate ekbar eta divisible holei r loop na ghure, break na dileo chole
    }
          
        }
        if(n==1){
            printf("One is not a prime or composite number");
        }
        else if(a==0){
            printf("The number is a prime number ");

        }
        else{
            printf("The number is a composite number");
        }
    return 0;
}