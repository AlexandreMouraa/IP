#include <stdio.h>

int main()
{

    int N = 0, aux100, aux50, aux10, aux1, aux;

    scanf("%d", &N);

    aux100 = N / 100;
    aux = N % 100;
    aux50 = aux / 50;
    aux = aux - 50;
    aux10 = aux / 10;
    aux = aux - (10 * aux10);
    aux1 = aux / 1;

    printf("NOTAS DE 100 = %d\n", aux100);
    printf("NOTAS DE 50 = %d\n", aux50);
    printf("NOTAS DE 10 = %d\n", aux10);
    printf("MOEDAS DE 1 = %d\n", aux1);


    return (0);
}