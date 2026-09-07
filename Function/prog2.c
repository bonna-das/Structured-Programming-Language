#include<stdio.h>
int sop(int x){
    int eque=0;
    eque=x*x+2*x+5;
    return eque;
}
int main(){
    int y=2;
    int ans=0;
    ans=sop(y);
    printf("%d",ans);
}