#include <stdio.h>

int PRIMO(int N);

int main()
{
    int N;

    scanf("%d", &N);

    if(N < 0)
    {
        printf("Numero invalido!");
    }
    else
    {
        PRIMO(N);
    }

    return (0);
}

int PRIMO(int N)
{
    int i, contador = 0;

    for(i = 1; i <= N; i++)
    {
        if(N % i == 0)
        {
            contador++;
        }
    }
    if(contador == 2)
    {
        printf("PRIMO");
    }
    else
    {
        printf("NAO PRIMO");
    }

    return 0;
}