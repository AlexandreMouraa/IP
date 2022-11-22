#include <stdio.h>

int main()
{
    double N = 0;
    int fator = 0, i, numeroD = 0, divisor = 100;

    scanf("%lf", &N);

    fator = N * 100;

    if(N / fator == 1)
    {
        numeroD = N * 100;
    }
    else
    {
        numeroD = N * 1000;
        divisor = 1000;
    }

    for(i = 10; i > 1; i--)
    {
        if(numeroD % (i + 1) == 0 && divisor % (i + 1) == 0)
        {
            i++;
        }

        if(numeroD % i == 0 && divisor % i == 0)
        {
                numeroD /= i;
                divisor /= i;
        }
    }
    printf("%d/%d", numeroD, divisor);
    return (0);
}
