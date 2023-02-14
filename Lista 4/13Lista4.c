#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tamanhoimg = 0, cordofundo = 0, lin = 0, col = 0, raio = 0, preenchimento = 0, cordecidida = 0, i, j, k, g, aux = 0, aux2 = 0, cont = 0, cont2 = 0, aux3 = 0;

    scanf("%d %d", &tamanhoimg, &cordofundo);

    if(tamanhoimg > 200 || cordofundo > 255 || cordofundo < 0)
        exit(1);

    int matriz[tamanhoimg][tamanhoimg];

    for(i = 0; i < tamanhoimg; i++)
    {
        for(j = 0; j < tamanhoimg; j++)
            matriz[i][j] = cordofundo;
    }

    scanf("%d %d", &col, &lin);

    while(lin != -1 && col != -1)
    {
        scanf("%d %d %d", &cordecidida, &raio, &preenchimento);

        aux = abs(lin - raio);
        aux2 = abs(col - raio);

        if(col - raio >= 0 && col + raio < tamanhoimg && lin - raio >= 0 && lin + raio < tamanhoimg)//Depois de um seculo eu consegui achar o erro, e era exatamente nessa linha, nao testando as dimensoes caso fossem < 0...
        {

        switch (preenchimento)//1 borda, 2 preencher
        {
        case 1:
        
        for(k = aux; k < raio + lin + 1; k++)
        {
            for(g = aux2; g < raio + col + 1; g++)
            {
                if(k <= aux || k >= (raio + lin) || g <= aux2 || g >= (col + raio))
                    matriz[k][g] = cordecidida;
            }
        }
            break;

        case 2:

        for(k = aux; k < raio + lin + 1; k++)
        {
            for(g = aux2; g < raio + col + 1; g++)
                matriz[k][g] = cordecidida;
        }  
            break;

        default:
            exit(1);
        }

        }

        scanf("%d %d", &col, &lin);
        
    }

    printf("P2\n%d %d\n255\n", tamanhoimg, tamanhoimg);

    for(i = 0; i < tamanhoimg; i++)
    {
        for(j = 0; j < tamanhoimg; j++)
            printf("%d ", matriz[i][j]);

        printf("\n");
    }

    return (0);
}
