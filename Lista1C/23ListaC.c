#include <stdio.h>

int main()
{

    int N = 0, i, fator = 0, divisores = 0, soma = 0, covalor = 0;

    scanf("%d", &N);

    printf("%d = ", N);

    for(i = 1; i < N; i++)
    {
        if(N % i == 0)
        {
            soma += i;
            if(i == 1)
            {
                printf("%d", i);
            }
            else
            {
                printf(" + %d", i);
            }
        }
    }
    if(soma == N)
    {
        printf(" = %d (NUMERO PERFEITO)", soma);
    }
    else
    {
        printf(" = %d (NUMERO NAO E PERFEITO)", soma);
    }

    return (0);
}
