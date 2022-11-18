#include <stdio.h>

int main()
{
    int N = 0;

    scanf("%d", &N);

    if(N % 3 == 0 && N % 5 == 0)
    {
        printf("O NUMERO E DIVISIVEL");
    }
    else
    {
        printf("O NUMERO NAO E DIVISIVEL");
    }

    return (0);
}