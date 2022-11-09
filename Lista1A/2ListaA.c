#include <stdio.h>
#define POLEGADA 25.4

int main()
{
double Celsius, Quantchuva, Fah, HowMmuchItRained = 0;

    scanf("%lf", &Fah);
    scanf("%lf", &Quantchuva);

    Celsius = 5 * (Fah - 32)/9;
    HowMmuchItRained = Quantchuva * POLEGADA;

    printf("O VALOR EM CELSIUS = %.2lf\n", Celsius);
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n", HowMmuchItRained);

    return (0);
}