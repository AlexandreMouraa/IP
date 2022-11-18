#include <stdio.h>

int main()
{

    int N = 0, milhar = 0, centena = 0, dezena = 0, unidade = 0, aux = 0, M = 0, C = 0, D = 0;

    scanf("%d", &N);

    if(N > 10000)
    {
        printf("Numero invalido!");
    }

    else
    {

        milhar = N / 1000;
        aux = N % 1000;
        centena = aux / 100;
        aux = aux % 100;
        dezena = aux / 10;
        aux = aux % 10;
        unidade = aux;

        M = milhar * 1000;
        C = centena * 100;
        D = dezena * 10;

        if(N >= 1000)
        {
            printf("(quarta ordem) %d = ", N);

            if(milhar > 1)
            {
                printf("%d unidades de milhar", milhar);
            }
            else
            {
                printf("%d unidade de milhar", milhar);
            }
            if(centena == 0)
            {
                printf("");
            }
            else if(centena > 1)
            {
                printf(" + %d centenas", centena);
            }
            else
            {
                printf(" + %d centena", centena);
            }
            if(dezena == 0)
            {
                printf("");
            }
            else if(dezena > 1)
            {
                printf(" + %d dezenas", dezena);
            }
            else
            {
                printf(" + %d dezena", dezena);
            }
            if(unidade == 0)
            {
                printf(" = %d", M);
            }
            else if(unidade > 1)
            {
                printf(" + %d unidades = %d", unidade, M);
            }
            else
            {
                printf(" + %d unidade = %d", unidade, M);
            }
            if(centena == 0)
            {
                printf("");
            }
            else
            {
                printf(" + %d", C);
            }
            if(dezena == 0)
            {
                printf("");
            }
            else
            {
                printf(" + %d", D);
            }
            if(unidade == 0)
            {
                printf("");
            }
            else
            {
                printf(" + %d", unidade);
            }

        }
        else if(N >= 100)
        {
            printf("(terceira ordem) %d = ", N);

            if(centena > 1)
            {
                printf("%d centenas", centena);
            }
            else
            {
                printf("%d centena", centena);
            }
            if(dezena == 0)
            {
                printf("");
            }
            else if(dezena > 1)
            {
                printf(" + %d dezenas", dezena);
            }
            else
            {
                printf(" + %d dezena", dezena);
            }
            if(unidade == 0)
            {
                printf("");
            }
            else if(unidade > 1)
            {
                printf(" + %d unidades", unidade);
            }
            else
            {
                printf(" + %d unidade", unidade);
            }
            printf(" = %d", C);
            if(dezena == 0)
            {
                printf("");
            }
            else
            {
                printf(" + %d", D);
            }
            if(unidade == 0)
            {
                printf("");
            }
            else
            {
                printf(" + %d", unidade);
            }
        }
        else if(N >= 10)
        {
            printf("(segunda ordem) %d = ", N);

            if(dezena > 1)
            {
                printf("%d dezenas", dezena);
            }
            else
            {
                printf("%d dezena", dezena);
            }
            if(unidade == 0)
            {
                printf(" = %d", D);
            }
            else if(unidade > 1)
            {
                printf(" + %d unidades = %d + %d", unidade, D, unidade);
            }
            else
            {
                printf(" + %d unidade = %d + %d", unidade, D, unidade);
            }
        }
        else
        {
            printf("(primeira ordem) %d = ", N);

            if(unidade > 1)
            {
                printf("%d unidades = %d", unidade, unidade);
            }
            else
            {
                printf("%d unidade = %d", unidade, unidade);
            }

        }

    }

    return (0);
}