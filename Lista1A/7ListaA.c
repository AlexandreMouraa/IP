#include <stdio.h>
#include <math.h>

int main()
{
    double Lado1 = 0, Lado2 = 0, Lado3 = 0, AreaTriangulo, T = 0;

    scanf("%lf %lf %lf", &Lado1, &Lado2, &Lado3);

    T = (Lado1 + Lado2 + Lado3)/2;
    AreaTriangulo = sqrt(T * (T - Lado1) * (T - Lado2) * (T - Lado3));

    printf("A AREA DO TRIANGULO E = %.2lf", AreaTriangulo);

    return (0);
}
