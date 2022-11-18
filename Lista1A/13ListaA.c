#include <stdio.h>

double EquacaoLinear(double a, double b, double c, double d, double e, double f);

int main()
{

    double A = 0, B = 0, C = 0, D = 0, E = 0, F = 0;

    EquacaoLinear(A, B, C, D, E, F);

    return (0);
}

double EquacaoLinear(double a, double b, double c, double d, double e, double f)
{

    double x = 0, y = 0, resultado1 = 0, resultado2 = 0;

    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

    y = (a * f - d * c)/(a * e - d * b);
    x = (c - b * y)/a;

    printf("O VALOR DE X E = %.2lf\n", x);
    printf("O VALOR DE Y E = %.2lf\n", y);

    return (0);
}