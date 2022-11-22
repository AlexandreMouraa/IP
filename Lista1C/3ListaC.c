#include <stdio.h>

int main()
{
    int N, j;
    char s = 94;

    scanf("%d", &N);

    if (N > 5 && N < 2000)
    {
        for(j = 1; j <= N; j++)
        {
            if(j % 2 == 0)
            {
                    printf("%d%c2 = %d\n", j, s, j * j);
            }
        }

    }
    return (0);
}