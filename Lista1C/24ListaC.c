#include <stdio.h>
#define VERDADEIRO 1

int main()
{
    int N = 0, i, resultado = 0;
    double sequencia = 0, primeirosequencia = 0, contador = 0;

    scanf("%d\n", &N);

    while (N != 0)
    {
        scanf("%lf ", &primeirosequencia);

        for(i = 1; i < N; i++)
        {
            contador++;
            scanf("%lf", &sequencia);

            if(primeirosequencia < sequencia)
            {
                resultado += VERDADEIRO;
            }
            primeirosequencia = sequencia;
        }
        if(resultado == contador)
        {
            printf("ORDENADA\n");
        }
        else
        {
            printf("DESORDENADA\n");
        }
        contador = 0;
        resultado = 0;

        scanf("%d\n", &N);
    }

    return (0);
}
