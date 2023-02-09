#include <stdio.h>
#include <stdlib.h>
 
typedef struct Fracao
{
    int denominador, divisor;
    char barra;
 
}Fracoes;
 
int main()
{   
 
    int N = 0, i, j, k, g = 0, cont = 0, cont2 = 0;
    char parada;
 
    scanf("%d", &N);
 
    Fracoes *Divisoes;
    Fracoes *aux;
 
    Divisoes = (Fracoes*)malloc(sizeof(Fracoes) * 5);
 
    for(i = 0; i < N; i++)
    {
        cont2 = 5;
 
        while(1)
        {
            scanf("%d%c%d%c", &Divisoes[g].denominador, &Divisoes[g].barra, &Divisoes[g].divisor, &parada);
            g++;
            if(g >= cont2 - 1)
            {
                cont2++;
                aux = (Fracoes*)realloc(Divisoes, cont2 * sizeof(Fracoes));
                Divisoes = aux;
            }
            if(parada != ' ')
                break;
        }
 
        printf("Caso de teste %d\n", i + 1);
        
        for(j = 0; j < g; j++)
        {
            for(k = j + 1; k < g; k++)
            {
                if(((double)Divisoes[j].denominador/(double)Divisoes[j].divisor) == ((double)Divisoes[k].denominador/(double)Divisoes[k].divisor))
                {
                     printf("%d%c%d equivalente a %d%c%d\n", Divisoes[j].denominador, Divisoes[j].barra, Divisoes[j].divisor, Divisoes[k].denominador, Divisoes[k].barra, Divisoes[k].divisor);
                     cont++;
                }
            }
        }
 
        if(cont == 0)
            printf("Nao ha fracoes equivalentes na sequencia\n");
 
        cont = 0;
        g = 0;
    }
 
    free(Divisoes);
 
    return (0);
}
