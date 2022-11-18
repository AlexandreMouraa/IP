#include <stdio.h>
#include <math.h>

int main()
{

    double massadoaviao = 0, aceleracaodoaviao = 0, segundosgastosdecolagem = 0, VELOCIDADE = 0, espacopercorrido = 0, trabalhorealizado = 0, VELOCIDADE2 = 0;

    scanf("%lf %lf %lf", &massadoaviao, &aceleracaodoaviao, &segundosgastosdecolagem);


    VELOCIDADE = (aceleracaodoaviao * segundosgastosdecolagem) * 3.6;
    VELOCIDADE2 = aceleracaodoaviao * segundosgastosdecolagem;
    espacopercorrido = (aceleracaodoaviao * pow(segundosgastosdecolagem, 2))/2;
    trabalhorealizado = (massadoaviao * pow(VELOCIDADE2,2))/2;

    printf("VELOCIDADE = %.2lf\n", VELOCIDADE);
    printf("ESPACO PERCORRIDO = %.2lf\n", espacopercorrido);
    printf("TRABALHO REALIZADO = %.2lf\n", trabalhorealizado * 1000);

    return (0);
}