#include<stdio.h>
#include<limits.h>
int main(){
    int mx=INT_MIN, arr[8];
    for (int i=0;i<8;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    printf("%d",mx);
}