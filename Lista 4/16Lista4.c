#include <stdio.h>
 
int main()
{
    int tam = 0, tamM = 0, i, j, k, g, cont = 0, cont1 = 0, cont2 = 0;
 
    scanf("%d", &tam);
 
    int matriz[tam][tam];
 
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
 
    scanf("%d", &tamM);
 
    int matrix[tamM][tamM];
 
    for(i = 0; i < tamM; i++)
    {
        for(j = 0; j < tamM; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
 
    for(i = 0; i < tamM - 1; i++)
    {
        for(j = 0; j < tamM - 1; j++)
        {
            for(k = 0 + i; k < tam + i; k++)
            {
                for(g = 0 + j; g < tam + j; g++)
                {
                    if(matriz[cont1][cont2++] == matrix[k][g])
                        cont++;  
                }
                cont1++;
                cont2 = 0;
            }  
            if(cont == (tam * tam))
            {
                printf("sim\n");
                return (0);
            }
            cont = 0;
            cont1 = 0;
            cont2 = 0;
        }
    }
 
    printf("nao\n");
    
    return (0);
}
