#include <stdio.h>
#include <math.h>

typedef struct 
{

    double vetor[4];
    double media;

}Vetores;

void change(Vetores *p, Vetores *a)
{

    Vetores aux;

    aux = *p;
    *p = *a;
    *a = aux;

}

int main()
{

    int N = 0, i, j;

    scanf("%d", &N);

    Vetores Numeros[N];

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%lf", &Numeros[i].vetor[j]);
            Numeros[i].media += pow(Numeros[i].vetor[j], 2);
        }
        Numeros[i].media = sqrt(Numeros[i].media);
    }

    for(i = 0; i < N; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            if(Numeros[i].media > Numeros[j].media)
                change(&Numeros[i], &Numeros[j]);
        }
    }

    for(i = 0; i < N; i++)
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", Numeros[i].vetor[0], Numeros[i].vetor[1], Numeros[i].vetor[2], Numeros[i].vetor[3], Numeros[i].media);
        
    return (0);
}
