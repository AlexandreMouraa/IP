#include <stdio.h>
 
int main()
{
 
    int matriz[9][9], i, j, k, g, somalinha = 0, somacoluna = 0, cont1 = 0, cont2 = 0;
 
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
            for(g = 0; g < 9; g++)
            {
                for(i = 0; i < 9; i++)
                {
                    for(j = 0; j < 9; j++)
                    {
                        if(matriz[g][i] == matriz[g][j] && i != j)
                        {
                            printf("invalido\n");
                            return (0);
                        }
                        else
                            somalinha += matriz[g][i];
 
                        if(matriz[i][g] == matriz[j][g] && j != i)
                        {
                            printf("invalido\n");
                            return (0);
                        }
                        else
                            somacoluna += matriz[i][g];
                    }
                    if(somacoluna == 45)
                        cont1++;
 
                    if(somalinha == 45)
                        cont2++;
 
                    somacoluna = 0;
                    somalinha = 0;
                }
        }
 
    if(cont1 == 9 && cont2 == 9)
        printf("valido\n");
 
    else
        printf("invalido\n");
 
    return (0);
}
