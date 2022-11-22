#include <stdio.h>

int MaiorSegmento(int n, int segmento)
{
    int primeironumero = 0, maiorsegmento = 0, i, valor = 0;

    scanf("%d", &n);
    scanf("%d", &primeironumero);

    for(i = 1; i < n; i++)
    {

        scanf("%d", &segmento);

        if(primeironumero < segmento)
        {
            maiorsegmento++;

            if(valor < maiorsegmento)
            {
                valor = maiorsegmento;
            }
        }
        else
        {
            maiorsegmento = 0;
        }
            primeironumero = segmento;
    }
    printf("O comprimento do segmento crescente maximo e: %d\n", valor);

    return (0);
}

int main()
{
    int N = 0, segmento = 0;

    MaiorSegmento(N, segmento);

    return (0);
}