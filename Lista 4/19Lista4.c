#include <stdio.h>
 
void Calculo(int Tam, double matrix[Tam][Tam], double squarematrix[Tam][Tam], double reserv[Tam][Tam]);
 
int main()
{
 
    int N = 0, i, k, cont = 0, potencia = 0;
 
    scanf("%d", &N);
    scanf("%d", &potencia);
 
    double matrizquadrada[N][N], matriz[N][N], reserva[N][N];
 
    for(i = 0; i < N; i++)
    {
        for(k = 0; k < N; k++)
        {
            scanf("%lf", &matriz[i][k]);
            matrizquadrada[i][k] = matriz[i][k];
            reserva[i][k] = 0;
        }
    }
 
    while(cont < potencia - 1)
    {
        Calculo(N, matriz, matrizquadrada, reserva);
        cont++;
    }
 
    for(i = 0; i < N; i++)
    {
        for(k = 0; k < N; k++)
        {
            printf("%.3lf ", matrizquadrada[i][k]);
        }
        printf("\n");
    }
    
    return (0);
}
 
void Calculo(int Tam, double matrix[Tam][Tam], double squarematrix[Tam][Tam], double reserv[Tam][Tam])
{
 
    int g, i, k;
   
    for(g = 0; g < Tam; g++)
    {
        for(i = 0; i < Tam; i++)
        {
            for(k = 0; k < Tam; k++)
            {
                reserv[g][i] += squarematrix[g][k] * matrix[k][i];
            }
        }        
    }
 
    for(i = 0; i < Tam; i++)
    {
        for(k = 0; k < Tam; k++)
        {
            squarematrix[i][k] = reserv[i][k];
            reserv[i][k] = 0;
        }
    }
}
