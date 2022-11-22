#include <stdio.h>

int divisores(int NumeroaSerdividido);

int main()
{

    int N = 0, i, soma = 0, k, l, valor = 0;

    scanf("%d", &N);

    if(N < 9)
    {
        for(i = 1; N > 0; i++)
        {
            soma = divisores(i);

            if(divisores(soma) == i)
            {
                if(soma != i && i != valor)
                {
                    printf("(%d,%d)\n", i, soma);
                    valor = soma;
                    N--;
                }
                i++;
            }
        }

    }
    else
    {
        return (0);
    }

    return (0);
}

int divisores(int NumeroaSerdividido)
{

    int j, somas = 0, k;

    for(k = 1; k < NumeroaSerdividido; k++)
    {
        if(NumeroaSerdividido % k == 0)
        {
            somas += k;
        }
    }

    return somas;
}
