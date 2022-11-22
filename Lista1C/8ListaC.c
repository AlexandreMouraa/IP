#include <stdio.h>

int main()
{
    int PaisA = 0, PaisB = 0, somaA = 0, somaB = 0;
    int anos = 0;

    scanf("%d", &PaisA);
    scanf("%d", &PaisB);

    somaA = PaisA;
    somaB = PaisB;

    for(somaA = PaisA, somaB = PaisB; somaA <= somaB;)
    {
        somaA += (PaisA * 0.03);
        PaisA = somaA;
        somaB += (PaisB * 0.015);
        PaisB = somaB;
        anos++;
    }

    printf("ANOS = %d\n", anos);

    return (0);
}