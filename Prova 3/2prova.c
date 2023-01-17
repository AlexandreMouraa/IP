#include <stdio.h>
 
void troca(double * x, double * y)
{
    double aux;
 
    aux = *x;
    *x = *y;
    *y = aux;
 
}
 
int main()
{
 
    int N = 0, matricula[50], matriculaordenada[50], ordem = 1;
    double notas[50], notasnovas[50];
    int i, j;
 
    scanf("%d", &N);
 
    for(i = 0; i < N; i++)
    {
        scanf("%d %lf", &matricula[i], &notas[i]);
        notasnovas[i] = notas[i];
    }
 
    for(i = 0; i < N; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            if(notasnovas[i] < notasnovas[j])
            {
                troca(&notasnovas[i], &notasnovas[j]);
            }
        }
    }
 
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(notas[i] == notasnovas[j])
            {
                matriculaordenada[j] = matricula[i];
            }
        }
    }
 
    for(i = 0; i < N; i++)
    {   
        printf("%d - Matricula: %d - Nota: %.1lf\n", ordem++, matriculaordenada[i], notasnovas[i]);
    }
 
    return (0);
}
