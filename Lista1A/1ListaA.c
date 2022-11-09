#include <stdio.h>

double Consumo(double Payment, double QuantityKw);

int main ()
{
    double Pagamento = 0, Kw = 0;

    Consumo(Pagamento, Kw);

    return (0);
}

double Consumo(double Payment, double QuantityKw)
{
    double CustokW, Consumoresidencia, Comdesconto, Desconto;

    scanf("%lf", &Payment);
    scanf("%lf", &QuantityKw);

    CustokW = (Payment * 0.7)/100;
    Consumoresidencia = CustokW * QuantityKw;
    Comdesconto = Consumoresidencia * 0.1;
    Desconto = Consumoresidencia - Comdesconto;

    printf("Custo por kW: R$ %.2lf\n", CustokW);
    printf("Custo do consumo: R$ %.2lf\n", Consumoresidencia);
    printf("Custo com desconto: R$ %.2lf\n", Desconto);


    return (0);
}
