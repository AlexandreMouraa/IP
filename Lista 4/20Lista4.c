#include <stdio.h>
 
int main()
{
 
    int linhas = 0, colunas = 0, maior = -1000, menor = 1000, indicemenorlinha = 0, indicemenorcoluna = 0, indicemaiorlinha = 0, indicemaiorcoluna = 0;
 
    scanf("%d %d", &linhas, &colunas);
 
    if(linhas > 0 && colunas > 0 && linhas <= 1000 && colunas <= 1000)
    {
        int matriz[linhas][colunas], i, j;
 
    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
 
            if(matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                indicemaiorlinha = i;
                indicemaiorcoluna = j;
            }
            if(matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                indicemenorlinha = i;
                indicemenorcoluna = j;
            }
        }
    }
 
    matriz[indicemaiorlinha][indicemaiorcoluna] = menor;
    matriz[indicemenorlinha][indicemenorcoluna] = maior;
 
    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    }
 
    return (0);
}
