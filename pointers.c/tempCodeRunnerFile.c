#include<stdio.h>
int swap(int* x,int* y){
   int temp=*x;
   *x=*y;
   *y=temp;
   return;
}
int main(){
   int m,n;
   scanf("%d %d",&m,&n);
   swap(&m,&n);
   printf("%d\n",m);
   printf("%d",n);
}
