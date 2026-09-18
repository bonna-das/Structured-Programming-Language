#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<35){
          printf("%d ",i);
        } 
    }
}