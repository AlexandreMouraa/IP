#include <stdio.h>

int main()
{
    double A = 0, B = 0, C = 0, Perimetro = 0, AreaTrapezio = 0;

    scanf("%lf %lf %lf", &A, &B, &C);

    if((B - C) < A && A < B + C)
    {
        if((A - C) < B && B < A + C)
        {
            if((A - B) < C && C < A + B)
            {
                Perimetro = A + B + C;
                printf("Perimetro = %.1lf\n", Perimetro);
            }
        }
    }
    else
    {
        AreaTrapezio = ((A + B) * C)/2;
        printf("Area = %.1lf\n", AreaTrapezio);
    }

    return (0);
}