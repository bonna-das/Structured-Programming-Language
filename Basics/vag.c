#include <stdio.h>
int main()
{
    float a=1.0, b=2.0, c=4.0;
    scanf("%f %f %f", &a, &b, &c);
    float avg = (a + b + c) / 3;
    printf("Avg=%f", avg);
    return 0;
}