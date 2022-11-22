#include <stdio.h>

int main()
{

    int N = 0, i, soma = 0;

    scanf("%d", &N);

    if(N < 5000)
    {
        int vet[N];

        for(i = 0; i < N; i++)
        {
            scanf("%d", &vet[i]);
            soma += vet[i];
        }
        printf("%d", soma);
    }

    return (0);
}