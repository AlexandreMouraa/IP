#include <stdio.h>

int main()
{
    int x = 0, y = 0;

    scanf("%d", &x);

    if(x < 1)
    {
        printf("Y = %d", x);
    }
    else if(x == 1)
    {
        printf("Y = 0");
    }
    else
    {
        printf("Y = %d", x * x);
    }

    return (0);
}