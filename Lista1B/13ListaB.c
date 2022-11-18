#include <stdio.h>

int main()
{
    long int Carbono = 0, RockWell = 0, Tracao = 0;

    scanf("%ld\n%ld\n%ld", &Carbono, &RockWell, &Tracao);

    if(Carbono < 7 && RockWell > 50 && Tracao > 80000)
    {
        printf("ACO DE GRAU = 10\n");
    }
    else if(Carbono < 7 && RockWell > 50 && Tracao <= 80000)
    {
        printf("ACO DE GRAU = 9\n");
    }
    else if(Carbono < 7 && RockWell <= 50 && Tracao <= 80000)
    {
        printf("ACO DE GRAU = 8\n");
    }
    else
    {
        printf("ACO DE GRAU = 7\n");
    }

    return (0);
}