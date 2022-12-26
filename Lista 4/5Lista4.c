#include <stdio.h>

int main()
{

    int linhas = 0, colunas = 0, i, k;

    scanf("%d %d", &linhas, &colunas);

    int matriz[linhas][colunas];

    for(i = 0; i < linhas; i++)
    {
        for(k = 0; k < colunas; k++)
        {
            if(i % 2 == 0)
            {
                if(k % 2 == 0)
                {
                    matriz[i][k] = 1;
                }
                else
                {
                    matriz[i][k] = 0;
                }
            }
            else
            {
                if(k % 2 == 0)
                {
                    matriz[i][k] = 0;
                }
                else
                {
                    matriz[i][k] = 1;
                }
            }

            printf("%d", matriz[i][k]);
        }
        printf("\n");
    }

    return (0);
}
