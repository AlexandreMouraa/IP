#include <stdio.h>

double Conversor(int n, int Fah, int Celsius);

int main()
{
    int N = 0, Fahrenhait = 0, Celsius = 0;

    Conversor(N, Fahrenhait, Celsius);

    return (0);
}

double Conversor(int n, int Fah, int Celsius)
{
    int i;
    double ValorFah, ValorCelsius;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%lf", &ValorFah);
        ValorCelsius = 5*(ValorFah - 32)/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", ValorFah, ValorCelsius);
    }

    return (0);
}