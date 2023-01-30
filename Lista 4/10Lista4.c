#include <stdio.h>
 
int MainDiagonal(int tam, int matrix[tam][tam]);
 
int main()
{
 
    int tam = 0, i, j, tr = 0, soma = 0, multiplicacao = 0;
 
    scanf("%d", &tam);
 
    int matriz[tam][tam];
 
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
 
    tr = MainDiagonal(tam, matriz);
 
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            multiplicacao = matriz[i][j] * tr;
            soma = multiplicacao + matriz[j][i];
            printf("%d ", soma);
        }
        printf("\n");
    }
 
    return (0);
}
 
int MainDiagonal(int tam, int matrix[tam][tam])
{
 
    int i, soma = 0;
 
    for(i = 0; i < tam; i++)
    {
        soma += matrix[i][i];
    }
 
    return soma;
}
