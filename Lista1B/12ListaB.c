#include <stdio.h>


int main()
{
    int dia = 0, mes = 0, ano = 0;

    scanf("%2d%2d%d", &dia, &mes, &ano);

    if(ano >= 10000)
    {
        printf("Data invalida!\n");
    }
    else
    {
        if(dia <= 31)
        {
            switch (mes) {
                case 1:
                    printf("%d de janeiro de %d\n", dia, ano);
                    break;
                case 2:
                    if(dia <= 28)
                    {
                        printf("%d de fevereiro de %d\n", dia, ano);
                    }
                    else
                    {
                        printf("Data invalida!\n");
                    }
                    break;
                case 3:
                    printf("%d de março de %d\n", dia, ano);
                    break;
                case 4:
                    if(dia <= 30)
                    {
                        printf("%d de abril de %d\n", dia, ano);
                    }
                    else
                    {
                        printf("Data invalida!\n");
                    }
                    break;
                case 5:
                    printf("%d de maio de %d\n", dia, ano);
                    break;
                case 6:
                    if(dia <= 30)
                    {
                        printf("%d de junho de %d\n", dia, ano);
                    }
                    else
                    {
                        printf("Data invalida!\n");
                    }
                    break;
                case 7:
                    printf("%d de julho de %d\n", dia, ano);
                    break;
                case 8:
                    printf("%d de agosto de %d\n", dia, ano);
                    break;
                case 9:
                    if(dia <= 30)
                    {
                        printf("%d de setembro de %d\n", dia, ano);
                    }
                    else
                    {
                        printf("Data invalida!\n");
                    }
                    break;
                case 10:
                    printf("%d de outubro de %d\n", dia, ano);
                    break;
                case 11:
                    if(dia <= 30)
                    {
                        printf("%d de novembro de %d\n", dia, ano);
                    }
                    else
                    {
                        printf("Data invalida!\n");
                    }
                    break;
                case 12:
                    printf("%d de dezembro de %d\n", dia, ano);
                    break;
                default:
                    printf("Data invalida!\n");
                    break;
            }
        }
        else
        {
            printf("Data invalida!\n");
        }
    }

    return (0);
}