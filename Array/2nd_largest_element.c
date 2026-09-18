#include<stdio.h>
#include<limits.h>
int main(){
    int mx=INT_MIN,arr[8],sec=INT_MIN;
    
    for(int i=0;i<8;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    for(int i=0;i<8;i++){
        if(arr[i]>sec && arr[i]!=mx){
            sec=arr[i];
        }
    }
    printf("%d",sec);
}