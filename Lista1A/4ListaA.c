#include <stdio.h>
#include <math.h>

int main()
{
    double A = 0, B = 0, C = 0, Delta;

    scanf("%lf %lf %lf", &A, &B, &C);

    Delta = pow(B, 2) - 4 * A * C;

    printf("O VALOR DE DELTA E = %.2lf\n", Delta);

    return (0);
}



