#include <stdio.h>


int main()
{
    double Salario = 0, reajuste = 0;

    scanf("%lf", &Salario);

    if(Salario > 300)
    {
        reajuste = (Salario * 0.3) + Salario;
        printf("SALARIO COM REAJUSTE = %.2lf", reajuste);
    }
    else if(Salario < 300)
    {
        reajuste = (Salario * 0.5) + Salario;
        printf("SALARIO COM REAJUSTE = %.2lf", reajuste);
    }

    return (0);
}