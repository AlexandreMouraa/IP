#include <stdio.h>
 
void ImprimeDiagonais(int Tam, int matrix[Tam][Tam])
{
 
    int i, k = 0;
 
    for(i = Tam - 1; i >= 0; i--)
    {
        printf("%d ", matrix[i][i]);
    }
 
    printf("\n");
 
    for(i = Tam - 1; i >= 0; i--)
    {
        printf("%d ", matrix[i][k++]);
    }
    printf("\n");
 
}
 
int main()
{
 
    int N = 0, i, j, tamanho = 0;
 
    scanf("%d", &N);
 
    while(N--)
    {
 
        scanf("%d", &tamanho);
 
        int matriz[tamanho][tamanho];
 
        for(i = 0; i < tamanho; i++)
        {
            for(j = 0; j < tamanho; j++)
            {
                scanf("%d", &matriz[i][j]);
            }
        }
 
        ImprimeDiagonais(tamanho, matriz);
    }
 
    return (0);
}
