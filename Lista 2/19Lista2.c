#include <stdio.h>

int main()
{

    int N = 0, i, j, cont = 1200000;

    scanf("%d", &N);

    if(N >= 1 && N <= 1000000)
    {
        int vet[N];

        for(i = 0; i < N; i++)
        {
            scanf("%d", &vet[i]);
        }

        for(i = 0; i < N; i++)
        {
            for(j = i + 1; j <= N; j++)
            {
                if(vet[i] != vet[j] && vet[i] != cont)
                {
                    printf("%d\n", vet[i]);
                    break;
                }
                if(vet[i] == vet[j] && vet[i] != cont)
                {
                    printf("%d\n", vet[j]);
                    cont = vet[i];
                    break;
                }
            }
        }
    }

    return (0);
}