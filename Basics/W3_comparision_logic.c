#include <stdio.h>
int main()
{
    int x = 2;
    int y = 3;
    int isLoggedIn = 1;
    int isAdmin = 0;

    printf("Regular user: %d\n", isLoggedIn && !isAdmin);
    printf("Has access: %d\n", isLoggedIn || isAdmin);
    printf("Not logged in: %d\n", !isLoggedIn);
    printf("%d", x > y);
}