#include <stdio.h>
 
void change(int * x, int * y)
{
    int aux;
 
    aux = *x;
    *x = *y;
    *y = aux;
}
 
int main()
{
 
    int dimensao = 0;
 
    scanf("%d", &dimensao);
 
    int matriz[dimensao][dimensao], i, j;
 
    for(i = 0; i < dimensao; i++)
    {
        for(j = 0; j < dimensao; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
 
    int k, g;
 
        for(j = 0; j < dimensao; j++)
        {
            for(g = 0; g < dimensao; g++)
            {
                for(k = j + 1; k < dimensao; k++)
                {
                    if(matriz[j][g] > matriz[k][g])
                    {
                        change(&matriz[j][g], &matriz[k][g]);
                    }
                }
            }
        }
 
    for(i = 0; i < dimensao; i++)
    {
        for(j = 0; j < dimensao; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
 
    return (0);
}
