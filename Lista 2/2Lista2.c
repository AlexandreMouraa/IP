#include <stdio.h>

int main()
{
    int N = 0, IntK = 0, i, cont = 0;

    while(scanf("%d", &N))
    {
        if(N >= 1)
        {
            int vet[N];

            for(i = 0; i < N; i++)
            {
                scanf("%d", &vet[i]);
            }

            scanf("%d", &IntK);

            for(i = 0; i < N; i++)
            {
                if(vet[i] >= IntK)
                {
                    cont++;
                }
            }
            printf("%d", cont);

            return (0);
        }
        else
        {
            scanf("%d", &N);
        }
    }

    return (0);
}