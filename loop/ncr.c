#include<stdio.h>
int main(){
    int i,n,r,sum=0;
    scanf("%d %d",&n,&r);
    int f=1,f1=1,f2=1;
    for(i=1;i<=n;i++){
        f=f*i;

}    for(i=1;i<=r;i++){
        f1=f1*i;

} 
  for(i=1;i<=(n-r);i++){
        f2=f2*i;

} 
sum= f/(f1*f2);
printf("%d",sum);
    }