#include <stdio.h>
 
int AwckwardMatrix(int Tam, int Matrix[Tam][Tam])
{
 
    int i, j, k = Tam - 1, g = Tam - 1, aux = Tam - 1, aux2 = 0, cont = 0, cont2 = 0;
 
    for(i = 0; i < Tam; i++ )
    {
        for(j = 0; j < Tam; j++)
        {
            if(Matrix[i][j] != Matrix[k][g] && j < aux && k > aux2)
            {
                cont = 1;
                break;
            }   
            else if(Matrix[i][j] == Matrix[k][g] && j < aux && k > aux2)
            {
                cont = 0;
            }
            k--;
        }
        g--;
        aux--;
        aux2++;
        cont2 += cont;
    }
 
    if(cont2 > 0)
        return (0);
    
    else
        return (1);
}
 
int main()
{
 
    int N = 0, tam = 0, i, j;
 
    scanf("%d", &N);
 
    while(N--)
    {
 
        scanf("%d", &tam);
 
        int matriz[tam][tam];
 
        for(i = 0; i < tam; i++)
        {
            for(j = 0; j < tam; j++)
            {
                scanf("%d", &matriz[i][j]);
            }
        }
 
        if(AwckwardMatrix(tam, matriz) == 1)
            printf("ESQUISITA\n");
 
        else
            printf("NAO ESQUISITA\n");
        
    }
 
    return (0);
}
