#include <stdio.h>
 
int main()
{
 
    int  i, k, cont = 0, cont2 = 0;
    double matrizquadrada = 0.0, matriz[2][2];
 
    for(i = 0; i < 2; i++)
    {
        for(k = 0; k < 2; k++)
        {
            scanf("%lf", &matriz[i][k]);
        }
    }
 
    int g;
 
    for(g = 0; g < 2; g++)
    {
        for(i = 0; i < 2; i++)
        {
            for(k = 0; k < 2; k++)
            {
                matrizquadrada += matriz[g][k] * matriz[k][i];
            }
            printf("%.3lf ", matrizquadrada);
            matrizquadrada = 0.0;
        }
        printf("\n");
    }
 
    return (0);
}
