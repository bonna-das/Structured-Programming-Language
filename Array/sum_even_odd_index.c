#include<stdio.h>
int main(){
    int sume=0,arr[6],sumo=0;
    for(int i;i<6;i++){
        scanf("%d",&arr[i]);
        if(i%2==0){
            sume+=arr[i];
        }
        else{
            sumo+=arr[i];
        }
    }
    printf("%d",sume-sumo);
}