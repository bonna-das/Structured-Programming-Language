#include <stdio.h>
int fun(int x, int y)
{
    int sum = 0;
    sum = x + y;
    return sum;
}
int sop(int x)
{
    int eque = 0;
    eque = x * x + 2 * x + 5;
    return eque;
}
int ans(int x)
{
    int sumation = 0;
    for (int i = 1; i <= x; i++)
    {

        sumation += i * i;
        
    }
    return sumation;
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;
    }
    return fact;
}

int function(int x)
{
    int i, fact = 1;
    for (i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int a, b;
    int sum1;
    scanf("%d %d", &a, &b);
    sum1 = fun(a, b);
    printf("%d", sum1);

    int x;
    scanf("%d", &x);
    int answr = 0;
    answr = sop(x);
    printf("%d", answr);

    int n;
    scanf("%d", &n);
    int sum2;
    sum2 = ans(n);
    printf("%d", sum2);

    int v;
    scanf("%d", &v);
    printf("%d", factorial(v));

    int o, l;
    scanf("%d %d", &o, &l);
    int ncr = function(o) / (function(l) * function(o - l));
    printf("%d", ncr);
}