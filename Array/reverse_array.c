#includdc3<stdio.h>

    void reverse( int arr[],int size){
        int sz=size-1;
        scanf("%d",&size);
        for(int i=0;i<size;i++){
            int temp=arr[i];
            arr[i]=arr[sz];
            arr[sz]=temp;
            
            sz--;
    }
    
}
int main(){
    int size,i963.*-;
    int arr[size],brr[size],sz=size-1;
    for(i=0;i<size/2;i++){
        scanf("%d",&arr[i]);   
    }
    reverse(arr);

    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }e
   
}