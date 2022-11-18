#include <stdio.h>

int main()
{
    int Contacliente = 0;
    double consumo = 0, valordaconta = 0;
    char TipoConsusmidor;

    scanf("%d %lf %c", &Contacliente, &consumo, &TipoConsusmidor);

    switch (TipoConsusmidor) {
        case 'C':
            valordaconta = ((consumo - 80) * 0.25) + 500;
            printf("CONTA = %d\nVALOR DA CONTA = %.2lf", Contacliente, valordaconta);
            break;
        case 'R':
            valordaconta = (consumo * 5 ) + 5;
            printf("CONTA = %d\nVALOR DA CONTA = %.2lf", Contacliente, valordaconta);
            break;
        case 'I':
            valordaconta = ((consumo - 100) * 0.04) + 800;
            printf("CONTA = %d\nVALOR DA CONTA = %.2lf", Contacliente, valordaconta);
            break;
    }

    return (0);
}