#include <stdio.h>
#include <math.h>

int main()
{

    double vet[3],vet2[3], Distancia = 0;
    int N = 0, i, j, k, v;

    scanf("%d", &N);

        for(i = 0; i < 3; i++)
        {
            scanf("%lf", &vet[i]);
        }

        for(v = 0; v < N - 1; v++)
        {
            for(j = 0; j < 3; j++)
            {
                scanf("%lf", &vet2[j]);
            }
            for(k = 0; k < 3; k++)
            {
                Distancia += pow((vet[k] - vet2[k]), 2);
            }
            Distancia = sqrt(Distancia);
            printf("%.2lf\n", Distancia);
            Distancia = 0;
            for(i = 0; i < 3; i++)
            {
                vet[i] = vet2[i];
            }
        }


    return (0);
}