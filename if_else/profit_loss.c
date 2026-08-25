#include<stdio.h>
int main(){
    int cost, sell;
    scanf("%d %d",&cost,&sell);
    if(cost-sell>0){
        printf("Loss\n");
        int loss=cost-sell;
        printf("the loss amount is=%d",loss);
    }
    else if(cost-sell==0){
        printf("No profit or loss");
    }
    else{
        printf("Profit\n");
        int profit=sell-cost;
        printf("the profit amount is=%d",profit);
    }
}