#include <stdio.h>
#include <math.h>

int main()
{

    double vet[3],vet2[3], Distancia = 0, maiorcoordenada = 0;
    int N = 0, i, j, k, v;

    scanf("%d", &N);

    for(i = 0; i < 3; i++)
    {
        scanf("%lf", &vet[i]);
    }

    N = N - 1;

    while (N--)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%lf", &vet2[j]);
        }
        for(k = 0; k < 3; k++)
        {
            if(vet[k] > vet2[k])
            {
                Distancia = (vet[k] - vet2[k]);
            }
            else
            {
                Distancia = (vet2[k] - vet[k]);
            }
            if(Distancia > maiorcoordenada)
            {
                maiorcoordenada = Distancia;
            }
        }
        printf("%.2lf\n", maiorcoordenada);
        maiorcoordenada = 0;
        for(i = 0; i < 3; i++)
        {
            vet[i] = vet2[i];
        }
    }


    return (0);
}