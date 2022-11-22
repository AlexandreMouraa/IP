#include <stdio.h>

double CompanhiadeTeatro(double ValorIngresso, double Inicial, double Final);

int main()
{

    double ValorIngresso = 0, ValorIncicial = 0, ValorFinal = 0;

    scanf("%lf", &ValorIngresso);
    scanf("%lf", &ValorIncicial);
    scanf("%lf", &ValorFinal);


    if(ValorIncicial >= ValorFinal)
    {
        printf("INTERVALO INVALIDO.");
    }
    else
    {
        CompanhiadeTeatro(ValorIngresso, ValorIncicial, ValorFinal);
    }

    return (0);
}

double CompanhiadeTeatro(double ValorIngresso, double Inicial, double Final)
{

    int i, ingressosVendidos = 0, melhoresingressosvendidos = 0;
    double ValorIngressoMomento = 0, LucroObtido = 0, melhorvaloringresso = 0, melhorLucro = 0;

    for(i = Inicial; i <= Final; i++)
    {

        ingressosVendidos = (((ValorIngresso - Inicial) * 2) * 25) + 120;
        LucroObtido = (Inicial * ingressosVendidos) - ((ingressosVendidos * 0.05) + 200);
        if(ingressosVendidos < 120)
        {
            ingressosVendidos = (((ValorIngresso - Inicial) * 2) * 30) + 120;
            LucroObtido = (Inicial * ingressosVendidos) - ((ingressosVendidos * 0.05) + 200);
        }
        printf("V: %.2lf, N: %d, L: %.2lf\n", Inicial, ingressosVendidos, LucroObtido);
        if(LucroObtido > melhorLucro)
        {
            melhorLucro = LucroObtido;
            melhoresingressosvendidos = ingressosVendidos ;
            melhorvaloringresso = Inicial;
        }
        LucroObtido = 0;
        Inicial++;
    }

    printf("Melhor valor final: %.2lf\n", melhorvaloringresso);
    printf("Lucro: %.2lf\n", melhorLucro);
    printf("Numero de ingressos: %d\n", melhoresingressosvendidos);

    return (0);
}
