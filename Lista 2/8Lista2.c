#include <stdio.h>
#include <string.h>

int main()
{

int N = 0, i, zero = 0, um = 1, vet[32], cont = 1, cont2 = 0;

        while(scanf("%d", &N) != EOF)
        {
            for(i = 0; i < cont; i++)
            {
                if(N <= 1)
                {
                    cont = 0;
                }
                if(N % 2 == 0)
                {
                    N /= 2;
                    vet[i] = 0;
                    cont++;
                    cont2++;
                }
                else
                {
                    N /= 2;
                    vet[i] = 1;
                    cont++;
                    cont2++;
                }
            }

            for(i = cont2 - 1; i >= 0; i--)
            {
                printf("%d", vet[i]);
            }
            printf("\n");

            memset(vet, 0, sizeof(vet));
            cont2 = 0;
        }

    return (0);
}
