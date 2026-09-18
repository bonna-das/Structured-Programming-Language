#include<stdio.h>
int funtion(int arr[]){
    arr[3]=8;
    arr[1]=90;
    return;
}
int main(){
    int arr[7]={1,3,5,7,9,11,13};
    funtion(arr);
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);//pass by value hoi na pointer er moto;pass by reference hoi
    }
}