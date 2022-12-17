#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int N = 0, i, valor1 = 0, valor2 = 0, diferenca = 0, j, k = 0;

    scanf("%d", &N);

    while (N)
    {
        scanf("%d %d", &valor1, &valor2);

        diferenca = abs(valor1 - valor2);

        int Reserva[diferenca + 1];
        char Armazenador[12221];

        for(i = 0; i < 12221; i++)
        {
            Armazenador[i] = '\0';
        }

        for(i = 0; i <= diferenca; i++)
        {
            Reserva[i] = valor1++;
            printf("%d", Reserva[i]);
        }

        for(i = diferenca; i >= 0; i--)
        {
            sprintf(Armazenador, "%d", Reserva[i]);

                for(j = strlen(Armazenador) - 1; j >= 0 ; j--)
                {
                    printf("%c", Armazenador[j]);
                }
        }
        printf("\n");

        N--;
    }

    return (0);
}
