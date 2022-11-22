#include <stdio.h>

int main()
{

    int N = 0, i, Nmr = 0, maiorvetor = 0, cont = 0, menor = 0, j;

    scanf("%d", &N);

    while (N != 0)
    {
        int vet[N];

        for(i = 0; i < N; i++)
        {
            scanf("%d", &vet[i]);
            if(vet[i] > maiorvetor)
            {
                maiorvetor = vet[i];
            }
        }

        for(j = 0; j <= maiorvetor; j++)
        {
            for(i = 0; i < N; i++)
            {
                if(j == vet[i])
                {
                    cont++;
                }

            }

            printf("(%d) %d\n", Nmr++, cont);

        }

        scanf("%d", &N);
        Nmr = 0;
        maiorvetor = 0;
        cont = 0;

    }

    return (0);

}