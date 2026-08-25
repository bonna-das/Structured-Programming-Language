#include <stdio.h>
int main()
{
    int x, y;
    printf("your x");
    scanf("%d", &x);
    printf("\nyour y");
    scanf("%d", &y);
    if (x == 0)
    {
        if (y == 0)
        {
            printf("ït's on origin");
        }
        else
        {
            printf("Its on y axis");
        }
    }
        else
        {
            if (y == 0)
            {
                printf("Its on x axis");
            }
            else
            {
                printf("Invalid");
            }
        }
    }