#include <stdio.h>

double SomatorioSimples(int n)
{
    double Somatorio = 0;
    double valor = 1;

    scanf("%d", &n);

    if(n <= 1)
    {
        printf("Numero invalido!");
    }
    else
    {
        int i;
        for(i = 1; i <= n; i++)
        {
            Somatorio += valor/i;
        }
        printf("%.6lf", Somatorio);
    }

    return (0);
}

int main()
{
    int N = 0;

    SomatorioSimples(N);

    return (0);
}