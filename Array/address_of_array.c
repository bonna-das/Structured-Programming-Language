#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[01]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[03]);
    printf("%p\n",&arr[4]);
    printf("%p\n",&arr[5]);//address diff 4 byte coz int datatype
}