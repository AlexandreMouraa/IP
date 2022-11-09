#include <stdio.h>
#include <math.h>

int main()
{
    double volume = 0, altura = 0, areahexagono = 0, comprimentoaresta = 0;

    scanf("%lf %lf", &altura, &comprimentoaresta);

    areahexagono = (3 * pow(comprimentoaresta, 2) * sqrt(3))/2;
    volume =  1 * areahexagono * altura;

    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS", volume / 3);

    return (0);
}