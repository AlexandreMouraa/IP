#include <stdio.h>
#include <string.h>

typedef struct Mercado
{
    char Produto[51];
    double valor;

}Mercadorias;

typedef struct Idas
{
    char Buys[51];
    int vezes;

}Parcinova;

short int ComparaString(Mercadorias p, Parcinova a)
{
    int i, j;

    if(strlen(p.Produto) > strlen(a.Buys) || strlen(p.Produto) < strlen(a.Buys))
        return 1;

    for(i = 0; i < strlen(p.Produto); i++)
    {
        if(p.Produto[i] != a.Buys[i])
            return 1;
    }

    return 0;
}

int main()
{

    int N = 0, i, j, k, g, Quantity = 0;
    double soma = 0.0;

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {

        scanf("%d", &Quantity);

        Mercadorias Compras[Quantity];

        for(j = 0; j < Quantity; j++)
        {
            getchar();
            scanf("%[^ ]s", Compras[j].Produto);
            scanf("%lf", &Compras[j].valor);
        }

        int Comprass;

        scanf("%d", &Comprass);

        Parcinova Foi[Comprass];

        for(k = 0; k < Comprass; k++)
        {
            getchar();
            scanf("%[^ ]s", Foi[k].Buys);
            scanf("%d", &Foi[k].vezes);

            for(j = 0; j < Quantity; j++)
            {
                if(ComparaString(Compras[j], Foi[k]) == 0)
                     soma += Compras[j].valor * Foi[k].vezes;
            }
        }

        printf("R$ %.2lf\n", soma);
        soma = 0.0;

    }

    return (0);
}
