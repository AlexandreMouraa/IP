#include <stdio.h>
 
int Achaidentidade(int Tam, int Matrix[Tam][Tam])
{
 
    int i, j;
 
    for(i = 0; i < Tam; i++)
        {
            for(j = 0; j < Tam; j++)
            {
                if(i == j)
                {
                    if(Matrix[i][j] != 1)
                    {
                        return (0);
                        break;//This break were not needed
                    }
                }
                else
                {
                    if(Matrix[i][j] != 0)
                    {
                        return(0);
                        break;//This break were not needed
                    }
                }
 
            }
        }
 
        return 1;
 
}
 
int main()
{
    int N = 0, tamanho = 0, i, j;
 
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
 
        if(Achaidentidade(tamanho, matriz) == 1)
            printf("Identidade\n");
 
        else
            printf("Nao identidade\n");
 
        
    }
 
    return (0);
}
