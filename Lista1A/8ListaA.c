#include <stdio.h>

int main()
{
    double Precofinal = 0, custodefabrica = 0, porcentagemdistribuidor = 0, impostos = 0, Distcomcusto = 0, Distcomimposto = 0;

    scanf("%lf", &custodefabrica);
    scanf("%lf", &porcentagemdistribuidor);
    scanf("%lf", &impostos);

    Distcomcusto = custodefabrica * (porcentagemdistribuidor/100);
    Distcomimposto = custodefabrica * (impostos/100);
    Precofinal = custodefabrica + Distcomcusto + Distcomimposto;

    printf("O VALOR DO CARRO E = %.2lf", Precofinal);

    return (0);
}