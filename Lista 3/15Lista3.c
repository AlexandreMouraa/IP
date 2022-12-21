#include <stdio.h>
#include <string.h>
#include <ctype.h>

void troca(char* x, char* y)
{
    char aux;

    aux = *x;
    *x = *y;
    *y = aux;
}

int main()
{

    int N = 0, i, j, cont = 0, cont2 = 0, Bigger = 0;
    char String[201], armazenador[200];

    scanf("%d", &N);

    while(N--)
    {

        getchar();
        scanf("%[^\n]s", String);

        for(i = 0; i < strlen(String); i++)
        {
            for(j = i + 1; j < strlen(String); j++)
            {
                if(tolower(String[i]) == tolower(String[j]) && String[i] != ' ')
                {
                    cont++;
                }
            }
            if(cont >= Bigger)
            {
                if(cont == Bigger)
                {
                    armazenador[cont2] = tolower(String[i]);
                    cont2++;
                }
                else
                {
                    cont2 = 0;
                    armazenador[cont2++] = tolower(String[i]);
                }
                Bigger = cont;
            }
            cont = 0;
        }

        armazenador[cont2] = '\0';

        for(i = 0; i < strlen(armazenador); i++)
        {
            for(j = i + 1; j < strlen(armazenador); j++)
            {
                if(armazenador[i] > armazenador[j])
                {
                    troca(&armazenador[i], &armazenador[j]);
                }
            }
        }

        for(i = 0; i < strlen(armazenador); i++)
            printf("%c", armazenador[i]);

        printf("\n");

        cont2 = 0;
        Bigger = 0;
    }

    return (0);
}
