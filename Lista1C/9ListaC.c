#include <stdio.h>

int fatorial(int N);

int main()
{
    int n = 0;

    fatorial(n);

    return (0);
}

int fatorial(int N)
{
    int Fatorial = 1, fator = 1, aux= 1, fator2 = 2, i;

    scanf("%d", &N);

    if(N == 0)
    {
        Fatorial = 1;
        printf("%d! = %d", N, Fatorial);
    }
    else
    {
        for(i = 1; i < N; i++)
        {
            Fatorial *= (N - fator);
            fator++;
        }
        printf("%d! = %d", N, Fatorial * N);
    }

    return (0);
}