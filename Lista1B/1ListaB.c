#include <stdio.h>

int main()
{
    double Nota1 = 0, Nota2 = 0, Nota3 = 0, mediaaritmetica = 0;

    scanf("%lf %lf %lf", &Nota1, &Nota2, &Nota3);

    mediaaritmetica = (Nota1 + Nota2 + Nota3)/3;

    if(mediaaritmetica >= 6)
    {
        printf("MEDIA = %.2lf\n", mediaaritmetica);
        printf("APROVADO\n");
    }
    else
    {
        printf("MEDIA = %.2lf\n", mediaaritmetica);
        printf("REPROVADO\n");
    }

    return (0);
}
