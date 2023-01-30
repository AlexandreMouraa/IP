#include <stdio.h>
 
int main()
{
 
    int linhas = 0, colunas = 0, divido = 0, i, j, maior = 0, frequenciamaior = 0, frequenciamenor = 0, menor = 1000;
    double MAIOR = 0.0, MENOR = 0.0;
 
    scanf("%d %d", &linhas, &colunas);
 
    int matriz[linhas][colunas];
 
    divido = linhas * colunas;
 
    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
 
            if(matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
            if(matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }
        }
    }
 
    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            if(matriz[i][j] == maior)
            {
                frequenciamaior++;
            }
            else if(matriz[i][j] == menor)
            {
                frequenciamenor++;
            }
        }
    }
 
    MAIOR = (double) frequenciamaior * 100/(double) divido;
    MENOR = (double) frequenciamenor * 100/(double) divido;
 
    printf("%d %.2lf%%\n", menor, MENOR);
    printf("%d %.2lf%%\n", maior, MAIOR);
 
    return (0);
}
