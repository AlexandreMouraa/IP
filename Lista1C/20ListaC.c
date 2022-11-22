#include <stdio.h>

int main()
{

    unsigned int Codigo = 0, mercadoriamaiorlucro = 0,  MaiorLucro = 0, MaisVendida = 0;
    double PrecodeCompra = 0, PrecodeVenda = 0, COMPRA = 0, VENDA = 0, TotalCompras = 0, TotalVendas = 0, PercentualLucroTotal = 0, Lucro = 0, diferenca = 0, mercadoriamaisvendida = 0;
    int Vendas = 0, abaixode10 = 0, entre10e20 = 0, acimade20 = 0, Em10 = 0, E10e20 = 0, em20 = 0;

    while(scanf("%u %lf %lf %d", &Codigo, &PrecodeCompra, &PrecodeVenda, &Vendas) != EOF)
    {

        COMPRA = PrecodeCompra * Vendas;
        VENDA = PrecodeVenda * Vendas;
        Lucro = ((VENDA * 100)/COMPRA);
        TotalCompras += COMPRA;
        TotalVendas += VENDA;

        abaixode10 = (COMPRA * 10)/100;
        acimade20 = (COMPRA * 20)/100;

        if(VENDA < (abaixode10 + COMPRA))
        {
            Em10++;
        }
        if(VENDA > (acimade20 + COMPRA))
        {
            em20++;
        }
        if(VENDA >= (abaixode10 + COMPRA) && VENDA <= (acimade20 + COMPRA))
        {
            E10e20++;
        }
        if((Lucro - 100) > mercadoriamaiorlucro)
        {
            mercadoriamaiorlucro = Lucro;
            MaiorLucro = Codigo;
        }
        if(Vendas > mercadoriamaisvendida)
        {
            mercadoriamaisvendida = Vendas;
            MaisVendida = Codigo;
        }

    }

    PercentualLucroTotal = (TotalVendas * 100)/TotalCompras;

    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", Em10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", E10e20);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", em20);
    printf("Codigo da mercadoria que gerou maior lucro: %u\n", MaiorLucro);
    printf("Codigo da mercadoria mais vendida: %u\n", MaisVendida);
    printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf e percentual de lucro total: %.2lf%%\n", TotalCompras, TotalVendas, (PercentualLucroTotal - 100));

    return (0);
}