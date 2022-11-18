#include <stdio.h>
#include <math.h>

void troca(double *x, double *y);

int main()
{

    double A = 0, B = 0, C = 0, Delta = 0, x1 = 0, x2 = 0;

    scanf("%lf %lf %lf", &A, &B, &C);

    Delta = pow(B,2) - (4 * A * C);

    if(Delta > 0)
    {
        x1 = ((B * - 1) + sqrt(Delta))/(2 * A);
        x2 = ((B * - 1) - sqrt(Delta))/(2 * A);

        if(x1 > x2)
        {
            troca(&x1, &x2);
        }

        printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf", x1, x2);

    }
    if(Delta == 0)
    {
        x1 = ((B * - 1) + sqrt(Delta))/(2 * A);
        printf("RAIZ UNICA\nX1 = %.2lf", x1);

    }
    else if(Delta < 0)
    {
        printf("RAIZES IMAGINARIAS");
    }


    return (0);
}

void troca(double *x, double *y)
{
    double aux = 0;

    aux = *x;
    *x = *y;
    *y = aux;

}