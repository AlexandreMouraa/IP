#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N = 0, i, j, casos = 0, diferenca = 0, cont = 0, k = 0, menos = 0, maior = 0, g;

    scanf("%d", &casos);

    for(j = 0; j < casos; j++)
    {
        scanf("%d", &N);

        int vet[N];

        for(i = 0; i < N; i++)
        {
            scanf("%d", &vet[i]);
        }
        for(i = 0; i < N; i++)
        {
            for(k = i + 1; k < N; k++)
            {
                if(vet[i] > vet[k])
                {
                    maior = vet[i] - vet[k];
                }
                else
                {
                    maior = vet[k] - vet[i];
                }
                if(maior > diferenca)
                {
                    diferenca = maior;
                }
            }
        }

        for(i = 0; i < N; i++)
        {
            for(k = i + 1; k < N; k++)
            {
                cont++;
                if(vet[i] > vet[k])
                {
                    menos = vet[i] - vet[k];
                }
                else
                {
                    menos = vet[k] - vet[i];
                }
                if(menos < diferenca)
                {
                    diferenca = menos;
                }
            }
        }

        printf("%d %d\n", diferenca, cont);
        diferenca = 0;
        cont = 0;

    }


    return (0);
}