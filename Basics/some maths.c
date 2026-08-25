#include<stdio.h>
int main(){
    int i=5, j=6, k, l;
    float a,b;
    k=(i/j)*j;
    l=(j/i)*i;
    a=(i/j)*j;
    b=(j/i)*i;
    printf("Your results are=%d %d %f %f",k,l,a,b);
    return 0;

}
