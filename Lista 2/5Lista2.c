#include <stdio.h>

int main()
{

    int N = 0, i, maiorelemento = 0, cont = 0;

    scanf("%d", &N);

    if(N < 1 || N > 10000)
    {
        return (0);
    }
    else
    {
        while(N != 0)
        {
            int vet[N];
            for(i = 0; i < N; i++)
            {
                scanf("%d", &vet[i]);
            }

            for(i = 0; i < N; i++)
            {
                if(vet[i] > maiorelemento)
                {
                    maiorelemento = vet[i];
                    cont = i;
                }
            }

            printf("%d %d\n", cont, maiorelemento);
            cont = 0;
            maiorelemento = 0;

            scanf("%d", &N);

        }
    }

    return (0);
}
