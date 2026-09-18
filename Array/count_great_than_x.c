#include<stdio.h>
int main(){
    int count=0, arr[5],x=3;
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>x){
            count++;
        }
    }
    printf("%d",count);
}