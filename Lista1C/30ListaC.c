#include <stdio.h>

int PRIMO(int numero, int dividido)
{
    int i, cont = 0;

    for(i = 1; i <= numero; i++)
    {
        if(numero % i == 0)
        {
            cont++;
        }
    }
    if(cont == 2)
    {
        printf("%d", numero);

        if(dividido/numero != 1)
        {
            printf(" x ");
        }
        else
        {
            printf("\n");
        }
    }

    return 0;
}

int decompor(int n)
{
    int decomposto = 0, i, covalor = 0;

    decomposto = n;

    printf("%d = ", n);

    for(i = 2; i <= n; i++)
    {
        covalor = i - 1;
        if(decomposto % covalor == 0)
        {
            if(covalor != 1)
            {
                PRIMO(covalor, decomposto);
                decomposto /= (i - 1);
                i--;
            }
        }
        if(decomposto % i == 0)
        {
            PRIMO(i, decomposto);
            decomposto /= i;
        }
    }

    return 0;
}

int main()
{
    int N = 0;

    while (scanf("%d", &N) != EOF)
    {
        if(N > 0)
        {
            decompor(N);
        }
        else
        {
            printf("Fatoracao nao e possivel para o numero %d!\n", N);
        }
    }

    return (0);
}