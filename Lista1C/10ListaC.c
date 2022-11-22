#include <stdio.h>

int main()
{
double n = 0, i = 0, K = 0, s = 0, aux = 0, aux2 = 0, aux3 = 0, aux4 = 0;
int j;
char menos = 45, mais = 43, dividido = 47, multiplicar = 120;


    scanf("%lf %lf %lf %lf", &n, &i, &K, &s);

    aux = n + i;
    aux2 = n - i;
    aux3 = n * i;
    aux4 = n / i;

    printf("Tabuada de soma:\n");
    for(j = 0; j < K; j++)
    {
        printf("%.2lf %c %.2lf = %.2lf\n", n, mais, i, aux);
        i += s;
        aux += s;
    }
    i -= K * s;
    printf("Tabuada de subtracao:\n");
    for(j = 0; j < K; j++)
    {
        printf("%.2lf %c %.2lf = %.2lf\n", n, menos, i, aux2);
        i += s;
        aux2 -= s;

    }
    i -= K * s;
    printf("Tabuada de multiplicacao:\n");
    for(j = 0; j < K; j++)
    {
        printf("%.2lf %c %.2lf = %.2lf\n", n, multiplicar,  i, aux3);
        i += s;
        aux3 = n * i;
    }
    i -= K * s;
    printf("Tabuada de divisao:\n");
    for(j = 0; j < K; j++)
    {
        printf("%.2lf %c %.2lf = %.2lf\n", n, dividido, i, aux4);
        i += s;
        aux4 = n / i;
    }
    return (0);
}
