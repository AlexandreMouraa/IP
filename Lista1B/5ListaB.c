#include <stdio.h>

int main()
{
double nota = 0;

    scanf("%lf", &nota);

    if(nota >= 0 && nota < 6)
    {
        printf("NOTA = %.1lf CONCEITO = D", nota);
    }
    if(nota >= 6 && nota < 7.5)
    {
        printf("NOTA = %.1lf CONCEITO = C", nota);
    }
    if(nota >= 7.5 && nota < 9)
    {
        printf("NOTA = %.1lf CONCEITO = B", nota);
    }
    if(nota >= 9 && nota <= 10)
    {
        printf("NOTA = %.1lf CONCEITO = A", nota);
    }

    return (0);
}