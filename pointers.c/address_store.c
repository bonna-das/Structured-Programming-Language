#include<stdio.h>
int main(){
    int a;
    int* x=&a;
    scanf("%d",&a);
    printf("%p\n",a);//hexadecimal value
    printf("%p\n",&a);//address of the variable a
    printf("%p\n",x);//address of the variable a
    printf("%p\n",&x);//address of the pointer variable x
    printf("%d\n",*x);//value of the variable a 
}