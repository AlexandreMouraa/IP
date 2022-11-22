#include <stdio.h>

int Verificar(int n, int sequencia)
{
    int i;
    scanf("%d %d", &n, &sequencia);

    if(n % 2 != 0)
    {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }
    else
    {
        for(i = 0; i < sequencia; i++)
        {
            if(n % 2 == 0)
            {
                printf("%d ", n);
                n+=2;
            }
        }
        printf("\n");
    }
    return (0);
}

int main()
{
    int N = 0, Sequencia = 0;

    Verificar(N, Sequencia);

    return (0);
}
