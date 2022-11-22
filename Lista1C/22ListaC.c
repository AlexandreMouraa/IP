#include <stdio.h>

int main()
{

    int N = 0, contador = 1, fator = 1, i, covalor = 0, contador1 = 1, j, boolean = 2;

    scanf("%d", &N);

    covalor = N;

    for(i = 0; i < N; i++)
    {

        printf("%d*%d*%d = ", contador1, contador1, contador1);

        for(j = covalor - 1; j < N; j++)
        {
            printf("%d", fator);
            fator += 2;

            if(j != N - 1)
            {
                printf("+");
            }

        }
        printf("\n");

        contador1++;
        covalor--;

    }

    return (0);
}