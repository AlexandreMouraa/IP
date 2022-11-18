#include <stdio.h>

int main()
{
    int Matricula = 0, Numerodedependentes = 0;
    double ValorSalarioMinimo = 0, SalarioFuncionario = 0, TaxadoImposto = 0, ImpostoBruto = 0, ImpostoLiquido = 0, Resultado = 0, ResultadoImposBruto = 0, Liquido = 0;

    scanf("%d %lf %d %lf %lf", &Matricula, &ValorSalarioMinimo, &Numerodedependentes, &SalarioFuncionario, &TaxadoImposto);

    ImpostoBruto = SalarioFuncionario/ValorSalarioMinimo;

    printf("MATRICULA = %d\n", Matricula);

    if(ImpostoBruto > 12)
    {
        ResultadoImposBruto = SalarioFuncionario * 0.2;
    }
    else if(ImpostoBruto > 5)
    {
        ResultadoImposBruto = SalarioFuncionario * 0.08;
    }
    else if(ImpostoBruto <= 5)
    {
        ResultadoImposBruto = 0.00;
    }

    Liquido = (300 * Numerodedependentes) * - 1;
    ImpostoLiquido = Liquido + ResultadoImposBruto;
    Resultado = (((SalarioFuncionario * TaxadoImposto)/100) * - 1) + ImpostoLiquido;

    printf("IMPOSTO BRUTO = %.2lf\n", ResultadoImposBruto);
    printf("IMPOSTO LIQUIDO = %.2lf\n", ImpostoLiquido);
    printf("RESULTADO = %.2lf\n", Resultado);

    if(Resultado < 0)
    {
        printf("IMPOSTO A RECEBER\n");
    }
    else if(Resultado > 0)
    {
        printf("IMPOSTO A PAGAR\n");
    }
    else
    {
        printf("IMPOSTO QUITADO\n");
    }

    return (0);
}