#include <stdio.h>

int main()
{
    int horas = 0, minutos = 0, segundos = 0, TEMPOSegundos = 0;

    scanf("%d", &horas);
    scanf("%d", &minutos);
    scanf("%d", &segundos);

    TEMPOSegundos = (horas * 3600) + (minutos * 60) + segundos;

    printf("O TEMPO EM SEGUNDOS E = %d", TEMPOSegundos);

    return (0);
}