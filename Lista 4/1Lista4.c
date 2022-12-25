#include <stdio.h>

int main()
{

    int matriz[2][2], i, j;
    double determinante = 1, determinante2 = 1;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            if(i == j)
                determinante *= matriz[i][j];

            else
                determinante2 *= matriz[i][j];
        }
    }

    printf("%.2lf", determinante - determinante2);

    return (0);
}
