#include <stdio.h>

void change(int *x, int *y)
{
    int aux = 0;

    aux = *x;
    *x = *y;
    *y = aux;
}

void AlinhavetorPar(int vet[], int n)
{
    int j, i;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(vet[j] < vet[i])
            {
                change(&vet[j], &vet[i]);
            }
        }

    }

}

void AlinhavetorImpar(int vet[], int n)
{
    int j, i;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(vet[j] > vet[i])
            {
                change(&vet[j], &vet[i]);
            }
        }

    }

}

int main ()
{
    int N = 0, vet[100000], i;

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < N; i++)
    {
        AlinhavetorPar(vet, N);

        if(vet[i] % 2 == 0)
        {
            printf("%d\n", vet[i]);
        }
    }
    for(i = 0; i < N; i++)
    {
            AlinhavetorImpar(vet, N);

            if(vet[i] % 2 != 0)
            {
                printf("%d\n", vet[i]);
            }
    }

    return (0);
}