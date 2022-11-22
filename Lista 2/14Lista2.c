#include <stdio.h>

void change(int *x, int *y)
{
    int aux = 0;

    aux = *x;
    *x = *y;
    *y = aux;
}

void Alinhavetor(int i, int vet[], int n)
{
    int j;

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

double Qualomaior (int I, const int vet[], int n)
{

    double maior = 0;

    for(I = 0; I < n/2; I++)
    {
        if(vet[I] > maior)
        {
            maior = vet[I];
        }
    }

    return maior;
}

double Qualomenor (int i, const int vet[], int n)
{

    double menor = 0, aux;

    aux = (n/2) + 1;

    for(i = 0; i < aux; i++)
    {
        if(vet[i] > menor)
        {
            menor = vet[i];
        }
    }

    return menor;
}

int main()
{
    int N = 0, i;
    double mediana = 0, maior = 0;

    scanf("%d", &N);

    int vet[N];

    for(i = 0; i < N; i++)
    {
        scanf("%d", &vet[i]);
    }

    Alinhavetor(i, vet, N);

    if(N % 2 != 0)
    {
        mediana = vet[N/2];
        printf("%.2lf\n", mediana);
    }
    else
    {
        mediana = (Qualomaior(i, vet, N) + Qualomenor(i, vet, N))/2;
        printf("%.2lf\n", mediana);
    }

    return (0);
}