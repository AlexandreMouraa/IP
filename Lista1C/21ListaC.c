#include <stdio.h>

int main()
{

    int A = 0, B = 0, C = 0, divisor = 0, i, MMC = 1, maiorvalor1 = 0, maiorvalor2 = 0, biggerone = 0;

    scanf("%d %d %d", &A, &B, &C);

    if(C > B && B > A)
    {
        biggerone = C;
    }
    else if(B > C && B > A)
    {
        biggerone = B;
    }
    else
    {
        biggerone = A;
    }

    for(i = 2; i <= biggerone; i++)
    {
        if(i >= 3 && A % (i - 1) == 0 || i >= 3 && B % (i - 1) == 0 || i >= 3 && C % (i - 1) == 0)
        {
            if(A == 1 && B == 1 && C == 1)
            {
                printf("MMC: %d\n", MMC);
                return 0;
            }
            else
            {
                i--;
            }

        }

        if(A % i == 0 || B % i == 0 || C % i == 0)
        {

            printf("%d %d %d :%d\n", A, B, C, i);

            if(A % i == 0)
            {
                A/= i;
            }
            if(B % i == 0)
            {
                B/= i;
            }
            if(C % i == 0)
            {
                C/= i;
            }
            MMC *= i;

        }

    }

    printf("MMC: %d\n", MMC);

    return (0);
}