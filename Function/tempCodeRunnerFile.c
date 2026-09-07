#include<stdio.h>
int function(int x, int y){
    int sum=0;
    sum=x+y;
    return sum;
}
int main(){
    int n,m;
    int sum1=0;
    scanf("%d %d",&n,&m);
    int sum1=function(n,m);
    printf("%d",sum1);

}