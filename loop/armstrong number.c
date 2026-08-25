#include<stdio.h>
int main(){
    int x=1,y=1,z=1;
    for(int j=1;j<=9;j++){
        printf("%d ",j);
    }
    for(int k=10;k<=99;k++){
        x=k%10;
        y=(k/10)%10;
        if((x*x)+(y*y*y)==k){
            printf("%d",k);
        }
    }
    for(int i=100;i<=500;i++){
        x=i%10;
        y=(i/10)%10;
        z=(i/100)%10;
        if((x*x*x)+(y*y*y)+(z*z*z)==i){
            printf("%d ",i);
        }
    }
}