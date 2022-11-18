#include <stdio.h>

int main()
{
    int inv = 0, N = 0, valor = 0;

    scanf("%d", &N);

    valor = N;

    if(N > 100000)
    {
        printf("NUMERO INVALIDO");
    }
    else
    {
        while(valor > 0)
        {
            inv = 10 * inv + valor % 10;
            valor/= 10;
        }

        if(inv == N)
        {
            printf("PALINDROMO");
        }
        else
        {
            printf("NAO PALINDROMO");
        }
    }

    return (0);
}