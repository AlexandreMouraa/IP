#include <stdio.h>
 
int main()
{
 
    int N = 0, i, j, k, g, cont = 0, aux = 0, aux2 = 0;
 
    scanf("%d", &N);
 
    int matriz[N + 1][N + 1];
 
    for(i = 0; i < N + 1; i++)
    {
        for(j = 0; j < N + 1; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
 
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < ((N * 2)/2); j++)
        {
            for(k = 0 + aux2; k < 2 + aux2; k++)
            {
                for(g = 0 + aux; g < 2 + aux; g++)
                {
                    if(matriz[k][g] == 1)
                        cont++;
                }
            }
            if(cont >= 2)
                printf("S");
            else
                printf("U");
 
            aux++;
            cont = 0;
        }
        printf("\n");
        aux2++;
        aux = 0;
    }
 
    return (0);
}
