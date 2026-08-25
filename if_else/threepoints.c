#include<stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    printf("Type your points");
    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
    if((y2-y1)*(x3-x2)==(y3-y2)*(x2-x1)){
        printf("The pointers are lying on a same line");
    }
    else{
        printf("The pointers are not lying on a same line");
    }
    return 0;
}
