#include <stdio.h>

int main()
{

    int N = 0, digitodecontrole = 0, primeiroalgarismo = 0, segundoalgarismo = 0, terceiroalgarismo = 0, controle = 0;

    scanf("%d", &N);

    terceiroalgarismo = N % 10;
    segundoalgarismo = ((N % 100) - terceiroalgarismo) / 10;
    primeiroalgarismo = ((N % 1000) - segundoalgarismo)/ 100;

    controle = primeiroalgarismo + (segundoalgarismo * 3) + (terceiroalgarismo * 5);
    digitodecontrole = controle % 7;

    printf("O NOVO NUMERO E = %d%d", N, digitodecontrole);

    return (0);
}