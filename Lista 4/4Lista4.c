#include <stdio.h>

int main()
{
    int linhas = 0, colunas = 0, i, k, lines = 1, cont = 0, contador = 0;

    do
    {
        scanf("%d", &linhas);

    }while(linhas < 1 || linhas > 10);

    do
    {
        scanf("%d", &colunas);

    }while(colunas < 1 || colunas > 10);

    int matriz[linhas][colunas];

    for(i = 0; i < linhas; i++)
    {
        for(k = 0; k < colunas; k++)
        {
            scanf("%d", &matriz[i][k]);
            cont++;
        }
        printf("linha %d: ", lines++);
        while(contador < cont)
        {
            printf("%d", matriz[i][contador]);
            if(contador < cont - 1)
            {
                printf(",");
            }
            else
            {
                printf("\n");
            }
            contador++;
        }
        cont = 0;
        contador = 0;
    }

    return (0);
}
