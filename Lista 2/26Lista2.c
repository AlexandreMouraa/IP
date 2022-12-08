#include <stdio.h>
#include <stdlib.h>
 
void change(int *x, int *y)
{
    int aux;
 
    aux = *x;
    *x = *y;
    *y = aux;
 
}
 
void Alinharvetor(int NovoVetor[])
{
 
    int i, j;
 
    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j < 9; j++)
        {
            if(NovoVetor[i] > NovoVetor[j])
            {
                change(&NovoVetor[i], &NovoVetor[j]);
            }
        }
    }
 
}
 
int main()
{
 
    int N = 0, i, j, k, vet[9], soma = 0, novovet[9], diferenca = 0;
 
    scanf("%d", &N);
 
    while (N--)
    {
        for (i = 0; i < 9; i++)
        {
            scanf("%d", &vet[i]);
            soma += vet[i];
        }
 
        for(k = 0; k < 9; k++)
        {
            novovet[k] = 0;
        }
        for(j = 0; j < 9; j++)
        {
            for(i = 0; i < 9; i++)
            {
                diferenca = soma - (vet[j] + vet[i]);
                if(abs(diferenca) != 100 && j != i)
                {
                    novovet[j] = vet[j];
                }
                else if(abs(diferenca) == 100 && j != i)
                {
                    novovet[j] = 0;
                    break;
                }
            }
        }
 
        Alinharvetor(novovet);
 
        for(i = 0; i < 9; i++)
        {
            if(novovet[i] != 0)
                printf("%d\n", novovet[i]);
        }
        soma = 0;
    }
 
    return (0);
}
