#include <stdio.h>

int main()
{
    int Linhas = 0, Colunas = 0, covalor = 0, i, j;

    scanf("%d\n%d", &Linhas, &Colunas);

    covalor = Colunas - (Colunas - 1);

    for(i = 2; i <= Linhas; i++)
    {
        if(covalor > Colunas)
        {
            covalor = Colunas;
        }
        for(j = 1; j <= covalor; j++)
        {
            printf("(%d", i);
            printf(",%d)", j);

            if(j != covalor)
            {
                printf("-");
            }
            else
            {
                printf("\n");
            }
        }
        covalor++;
    }

    return (0);
}