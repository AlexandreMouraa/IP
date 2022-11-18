#include <stdio.h>

int main()
{
    int horas = 0;
    double  valorapagar = 0;

    scanf("%d", &horas);

    if(horas % 3 == 0)
    {
        valorapagar = (horas/3) * 10;
    }
    else
    {
        if((horas - 1) % 3 == 0)
        {
            valorapagar = (((horas - 1)/3) * 10) + 5;
        }
        else
        {
            valorapagar = (((horas - 1)/3) * 10) + 10;
        }

    }

    printf("O VALOR A PAGAR E = %.2lf\n", valorapagar);

    return (0);
}
