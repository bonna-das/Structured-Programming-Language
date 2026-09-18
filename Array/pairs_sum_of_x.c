#include<stdio.h>
int main(){
    int i,j,x=12,size=7,arr[8],count=0;//count=number of pairs//size=index number
    for( i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }
    
    for( i=0;i<8;i++){
         if(arr[i]==arr[size]){
                break;
            }
        if((arr[i]+arr[size])==x){
            count++;
            printf("%d %d\n",arr[i],arr[size]);
            size--;
            
           
        }
    }
    printf("%d",count);
    return 0;
}
