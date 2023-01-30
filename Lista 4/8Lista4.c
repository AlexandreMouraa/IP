#include <stdio.h>
 
int main()
{
    int lin = 0, col = 0, borda = 0, valorborda = 0, i, j, k, aux = 0;
 
    scanf("%d %d %d %d", &lin, &col, &borda, &valorborda);
 
    if(lin > 100 || col > 100)
        return (0);
 
    printf("P2\n");
    printf("%d %d\n", lin, col);
    printf("255\n");
 
    int matriz[lin][col];
 
    for(i = 0; i < lin; i++)
    {
        for(j = 0; j < col; j++)
        {
            matriz[i][j] = 0;
        }
    }
 
    for(i = 0; i < borda; i++)
    {
        for(j = 0; j < col; j++)
        {
            matriz[i][j] = valorborda;
        }
    }
 
    for(i = 0; i < lin; i++)
    {
        for(j = 0; j < borda; j++)
        {
            matriz[i][j] = valorborda;
        }
    }
 
    for(i = lin - 1; i >= lin - borda; i--)
    {
        for(j = 0; j < col; j++)
        {
            matriz[i][j] = valorborda;
        }
    }
 
    for(i = 0; i < lin; i++)
    {
        for(j = col - 1; j >= col - borda; j--)
        {
            matriz[i][j] = valorborda;
        }
    }
 
    for(i = 0; i < lin; i++)
    {
        for(j = 0; j < col; j++)
            printf("%d ", matriz[i][j]);
 
        printf("\n");
    }
 
    return (0);
}
