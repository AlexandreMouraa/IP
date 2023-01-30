#include <stdio.h>
 
int main()
{
 
    int linhas = 0, colunas = 0, i, j, indicelinha = 0, indicecoluna = 0, cont = 0;
 
    scanf("%d\n%d", &linhas, &colunas);
 
    int matriz[linhas][colunas];
 
    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
 
    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            if(matriz[i][j] == 1111)
            {
                if(i >= indicelinha)
                {
                    indicelinha = i;
                    indicecoluna = j;
                }
                cont++;
            }
        }
    }
 
    if(cont > 0)
    {
        printf("%d %d\n", indicelinha, indicecoluna);
    }
    else
    {
        printf("WALLY NAO ESTA NA MATRIZ\n");
    }
    
    return (0);
}
