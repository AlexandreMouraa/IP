#include <stdio.h>
#include <string.h>
#include <math.h>
 
void ImprimirValor(int Fator[], int TAM)
{
    int i;
 
    printf("(");
 
    for(i = 0; i < TAM; i++)
    {
        printf("%d", Fator[i]);
 
        if(i != TAM - 1)
        {
            printf(",");
        }
        else
        {
            printf(")\n");
        }
    }
 
}
 
int main()
{
 
    char string[1000], string2[1000], ultima[1];
    double Resultado = 0;
    int FA[5], FB[5], i, j, k, conta = 0, conte = 0, conti = 0, conto = 0, contu = 0, valor = 0;
 
 
    scanf("%[^;]s", string);
    scanf("%[^\n]s", string2);
 
 
    for(k = 0; k < 5; k++)
    {
        FA[k] = 0;
        FB[k] = 0;
    }
 
    if(string2[0] == ';')
    {
        for(i = 0; i < strlen(string); i++)
        {
            switch (string[i])
            {
                case 'a':
                    conta++;
                    FA[0] = conta;
                    break;
                case 'A':
                    conta++;
                    FA[0] = conta;
                    break;
                case 'e':
                    conte++;
                    FA[1] = conte;
                    break;
                case 'E':
                    conte++;
                    FA[1] = conte;
                    break;
                case 'i':
                    conti++;
                    FA[2] = conti;
                    break;
                case 'I':
                    conti++;
                    FA[2] = conti;
                    break;
                case 'o':
                    conto++;
                    FA[3] = conto;
                    break;
                case 'O':
                    conto++;
                    FA[3] = conto;
                    break;
                case 'u':
                    contu++;
                    FA[4] = contu;
                    break;
                case 'U':
                    contu++;
                    FA[4] = contu;
                    break;
                default:
                    continue;
            }
        }
 
        conta = 0;
        conte = 0;
        conti = 0;
        conto = 0;
        contu = 0;
 
        for(i = 0; i < strlen(string2); i++)
        {
            switch (string2[i])
            {
                case 'a':
                    conta++;
                    FB[0] = conta;
                    break;
                case 'A':
                    conta++;
                    FB[0] = conta;
                    break;
                case 'e':
                    conte++;
                    FB[1] = conte;
                    break;
                case 'E':
                    conte++;
                    FB[1] = conte;
                    break;
                case 'i':
                    conti++;
                    FB[2] = conti;
                    break;
                case 'I':
                    conti++;
                    FB[2] = conti;
                    break;
                case 'o':
                    conto++;
                    FB[3] = conto;
                    break;
                case 'O':
                    conto++;
                    FB[3] = conto;
                    break;
                case 'u':
                    contu++;
                    FB[4] = contu;
                    break;
                case 'U':
                    contu++;
                    FB[4] = contu;
                    break;
                default:
                    continue;
            }
        }
 
        ImprimirValor(FA, 5);
        ImprimirValor(FB, 5);
 
        Resultado = pow(FA[0] - FB[0], 2) + pow(FA[1] - FB[1], 2) + pow(FA[2] - FB[2], 2) + pow(FA[3] - FB[3], 2) + pow(FA[4] - FB[4], 2);
        Resultado = sqrt(Resultado);
        printf("%.2lf\n", Resultado);
    }
    else
    {
        printf("FORMATO INVALIDO!\n");
    }
 
 
    return (0);
}
