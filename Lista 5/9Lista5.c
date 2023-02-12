#include <stdio.h>
#include <math.h>

typedef struct 
{

    double valores;

}Continhas;

void Distancia(int Linha, Continhas matrix[Linha][4]);

int main()
{

    int N = 0, i, j, k, aux = 0;
    scanf("%d", &N);
    Continhas matriz[N][4];

    for(i = 0; i < N - 1; i++)
    { 
        for(j = i + aux; j < 2 + i; j++)
        {
            for(k = 0; k < 4; k++)
                scanf("%lf", &matriz[j][k].valores);  
        }
        Distancia(i, matriz);
        if(i == 0)
            aux++;
    }

    return (0);
}

void Distancia(int Linha, Continhas matrix[Linha][4])
{

    int i, j, aux = 0;
    double Distance = 0.0;

    for(i = Linha; i < 2 + (Linha - 1); i++)
    {
        for(j = 0; j < 4; j++)
            Distance += pow((matrix[i][j].valores - matrix[i + 1][j].valores), 2);
            
        Distance = sqrt(Distance);
    }

    printf("%.2lf\n", Distance);
}
