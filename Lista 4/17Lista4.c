#include <stdio.h>
 
int main()
{
 
    int BetQuantity = 0;
 
    scanf("%d", &BetQuantity);
 
    int matriz[BetQuantity + 1][6], i, j, k, g, cont = 0, sena = 0, quina = 0, quadra = 0;
 
    if(BetQuantity > 0 && BetQuantity <= 50000)
    {
    
        for(i = 0; i < BetQuantity + 1; i++)
        {
            for(j = 0; j < 6; j++)
            {
                scanf("%d", &matriz[i][j]);
            }
        }
 
        for(i = 0; i < BetQuantity; i++)
        {
            for(j = 0; j < 6; j++)
            {
                for(k = BetQuantity; k < BetQuantity + 1; k++)
                {
                    for(g = 0; g < 6; g++)
                    {
                        if(matriz[k][g] == matriz[i][j])
                            cont++;
                    }
                }  
            }
            switch(cont)
                {
                case 4:
                    quadra++;
                    break;
                case 5:
                    quina++;
                    break;
                case 6:
                    sena++;
                    break;
                }
                
                cont = 0; 
        }
 
        if(sena > 0)
            printf("Houve %d acertador(es) da sena\n", sena);
 
        else
            printf("Nao houve acertador para sena\n");
 
        if(quina > 0)
            printf("Houve %d acertador(es) da quina\n", quina);
 
        else
            printf("Nao houve acertador para quina\n");
 
        if(quadra > 0)
            printf("Houve %d acertador(es) da quadra\n", quadra);
 
        else
            printf("Nao houve acertador para quadra\n");
 
    }
   
    return (0);
}
