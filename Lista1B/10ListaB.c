#include <stdio.h>

void troca(double *x, double *y)
{
    double aux;

    aux = *x;
    *x = *y;
    *y = aux;
}

int main()
{
    double val1 = 0, val2 = 0, val3 = 0;

    scanf("%lf\n%lf\n%lf", &val1, &val2, &val3);

    if(val2 > val3)
    {
        troca(&val2, &val3);
    }
    if(val1 > val3)
    {
        troca(&val1, &val3);
    }
    if(val1 > val2)
    {
        troca(&val1, &val2);
    }

    printf("%.2lf, %.2lf, %.2lf", val1, val2, val3);

    return (0);
}