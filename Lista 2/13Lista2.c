#include <stdio.h>

int main()
{

    int N = 0, i, j, maiorfrequencia = 0, segundamairofrequencia = 0, cont = 0, definir = 1, reserva = 0;

    scanf("%d", &N);

    int vet[N];

    for(i = 0; i < N; i++)
    {
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < N; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            if(vet[j] == vet[i])
            {
                reserva = vet[j];
                cont++;
            }
        }
        if(cont > definir)
        {
            definir = cont + 1;
            maiorfrequencia = reserva;
        }
        cont = 0;
    }

    printf("%d\n%d", maiorfrequencia, definir);

    return (0);
}
