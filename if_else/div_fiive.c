#include<stdio.h>//divided by 5 or 3 but not by 15
int main(){
    int x;
    scanf("%d",&x);
    if(x%5==0 || x%3==0){
        
            if(x%15!=0){
                printf("Valid");
            }
        
    }
    else{
        printf("Invalid");
    }
    return 0;
}