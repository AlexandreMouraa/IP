#include <stdio.h>

void troca(int *x, int *y)
{
    int aux = 0;

    aux = *x;
    *x = *y;
    *y = aux;
}

int main()
{

    int N = 0, i, j, covalor = 0;

    scanf("%d", &N);

    int vet[N];

    for(i = 0; i < N; i++)
    {
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < N; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            if(vet[j] < vet[i])
            {
                troca(&vet[j], &vet[i]);
            }
        }
    }

    for(i = 0; i < N; i++)
    {
        printf("%d\n", vet[i]);
    }

    return (0);
}
