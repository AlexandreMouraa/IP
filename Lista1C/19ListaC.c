#include <stdio.h>
#include <math.h>

int main()
{

    int hipotenusa = 0, C1 = 0, C2 = 0, N = 0, i, j, k;

    scanf("%d", &N);

    for(i = 3; i <= N; i++)
    {
        for(k = 1; k < N; k++)
        {
            for(j = 2; j < N; j++)
            {
                if(pow(j,2) + pow(k,2) == pow(i,2))
                {
                    if(k < j)
                    {
                        printf("hipotenusa = %d, catetos %d e %d\n", i, k, j);
                    }

                }
            }

        }
    }

    return (0);
}
