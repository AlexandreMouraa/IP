#include <stdio.h>

int Times(int N);

int main()
{
    int N;

    scanf("%d", &N);

    if(N < 2)
    {
        printf("Campeonato invalido!");
    }
    else
    {
        Times(N);
    }

    return (0);
}

int Times(int N)
{

    int T = 1, Time1 = 1, Time2 = 2, i, h, j;
    char contra = 88;
    h = N;

    for(i = 1; i < h; i++)
    {
        for(j = 1; j < N; j++)
        {
            printf("Final %d: Time%d %c Time%d\n", T++, Time1, contra, Time2);
            Time2++;
        }
        Time1++;
        Time2 = Time1 + 1;
        N--;
    }

    return (0);
}