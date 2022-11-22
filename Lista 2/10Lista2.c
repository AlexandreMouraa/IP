#include <stdio.h>

int main()
{

int N = 0, notas[10000], i, ultimonota = 0, maiornota = 0, frequencia = 0, indice = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        scanf("%d", &notas[i]);
    }

    for(i = 0; i < N; i++)
    {
        if(notas[i] > maiornota)
        {
            maiornota = notas[i];
            indice = i;
        }
        if(notas[i] == notas[N - 1])
        {
            frequencia++;
        }
    }

    ultimonota = notas[N - 1];

    printf("Nota %d, %d vezes\n", ultimonota, frequencia);
    printf("Nota %d, indice %d\n", maiornota, indice);

    return (0);
}
