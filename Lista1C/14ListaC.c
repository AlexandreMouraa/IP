#include <stdio.h>

int main()
{

    unsigned int Matricula = 0;
    double horastrabalhadas = 0, Salariohora = 0, SalarioTOTAL = 0;

    scanf("%u %lf %lf", &Matricula, &horastrabalhadas, &Salariohora);
    getchar();

    while (Matricula != 0)
    {

        SalarioTOTAL = horastrabalhadas * Salariohora;
        printf("%u %.2lf\n", Matricula, SalarioTOTAL);
        SalarioTOTAL = 0;

        scanf("%u %lf %lf", &Matricula, &horastrabalhadas, &Salariohora);

    }

    return (0);
}