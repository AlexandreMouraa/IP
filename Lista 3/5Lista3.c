#include <stdio.h>
#include <string.h>

int main()
{
    int valor1, valor2, i, somar = 0;

    scanf("%d %d", &valor1, &valor2);

    while( valor1 != 0 && valor2 != 0)
    {

        for(i = 0; i < 1; i++)
            somar = valor1 + valor2;

        char soma[1000];

        sprintf(soma, "%d", somar);

        for(i = 0; i < strlen(soma); i++)
        {
            if(soma[i] != '0')
                printf("%c", soma[i]);
        }
        printf("\n");

        scanf("%d", &valor1);
        scanf("%d", &valor2);

    }

    return (0);
}
