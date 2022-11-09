#include <stdio.h>
#include <math.h>
#define PI 3.14159

double CustodaLata(double Raio);

int main()
{
    double raio = 0;

    CustodaLata(raio);

    return (0);
}

double CustodaLata(double Raio)
{

    double altura, Valorlata, areacilindro, areadocirculo, arealateral;

    scanf("%lf", &Raio);
    scanf("%lf", &altura);

    areadocirculo = PI * pow(Raio, 2);
    arealateral = 2 * PI * Raio * altura;
    areacilindro = 2 * areadocirculo + arealateral;
    Valorlata = areacilindro * 100;

    printf("O VALOR DO CUSTO E = %.2lf\n", Valorlata);

    return (0);
}