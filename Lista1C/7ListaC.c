#include <stdio.h>

int main()
{
    int i, j;
    long int Matricula;
    double Notasprovas = 0, NotasListas = 0, NotaTrabalhoFinal = 0, Frequencia = 0;

    double Notafinal, MP, soma = 0, ML;

    scanf("%ld", &Matricula);

    while (Matricula != -1)
    {
        for(i = 0; i < 8; i++)
        {
            scanf("%lf", &Notasprovas);
            soma += Notasprovas;
        }
        MP = soma/8;
        soma = 0;

        for(j = 0; j < 5; j++)
        {
            scanf("%lf", &NotasListas);
            soma += NotasListas;
        }
        ML = soma/5;

        scanf("%lf", &NotaTrabalhoFinal);
        scanf("%lf", &Frequencia);

        Notafinal = (0.7 * MP) + (0.15 * ML) + (0.15 * NotaTrabalhoFinal);

        if(Notafinal >= 6 && Frequencia > 96)
        {
            printf("Matricula: %ld, Nota Final: %.2lf, Situacao Final: APROVADO\n", Matricula, Notafinal);
        }
        if(Frequencia >= 96 && Notafinal < 6)
        {
            printf("Matricula: %ld, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", Matricula, Notafinal);
        }
        if(Notafinal >= 6 && Frequencia < 96)
        {
            printf("Matricula: %ld, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", Matricula, Notafinal);
        }
        if(Notafinal < 6 && Frequencia < 96)
        {
            printf("Matricula: %ld, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", Matricula, Notafinal);
        }
        soma = 0;
        scanf("%ld", &Matricula);
    }

    return 0;

}