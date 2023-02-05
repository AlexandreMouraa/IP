#include <stdio.h>

typedef struct Fracao
{
    int denominador, divisor;
    char barra;

}Fracoes;

int main()
{   

    int N = 0, i, j, k, cont = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        int Sequencia = 0;
        
        scanf("%d", &Sequencia);

        Fracoes Divisoes[Sequencia];

        for(j = 0; j < Sequencia; j++)
            scanf("%d %c %d", &Divisoes[j].denominador, &Divisoes[j].barra, &Divisoes[j].divisor);

        printf("Caso de teste %d\n", i + 1);
        
        for(j = 0; j < Sequencia; j++)
        {
            for(k = j + 1; k < Sequencia; k++)
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
    }

    return (0);
}
