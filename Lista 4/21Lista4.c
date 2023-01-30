#include <stdio.h>
 
int main()
{
    int N = 0, i, j, cont = 0, maior = 0, aux = 0;
 
    scanf("%d", &N);
    int vet[N], distancia = 0;
    int matriz[6][6] = {{0, 63, 210, 190, -1, 190},
                       {63, 0, 160, 150, 95, 10},
                       {210, 160, 0, 10, 1, 10},
                       {190, 150, 10, 0, 10, 20},
                       {10, 95, 7, 21, 0, 80},
                       {190, 2, -1, 41, 80, 0}};
 
    for(i = 0; i < N; i++)
        scanf("%d", &vet[i]);
 
    for(i = 0; i < N - 1; i++)
    {
        if(matriz[vet[i]][vet[i + 1]] == -1)
        {
            printf("rota invalida!\n");
            return (0);
        }
        else
            distancia += matriz[vet[i]][vet[i + 1]];
    }
 
    printf("%d", distancia);
 
    return (0);
}
