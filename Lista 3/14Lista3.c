#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char String[51], NewString[51];
    int verificador = 0, cont = 0, i, indice[50], cont2 = 0;

    while(scanf("%[^\n]s", String) != EOF)
    {
            getchar();

            for(i = 0; i < strlen(String); i++)
            {
                if(String[i] != ' ')
                {
                    NewString[cont++] = String[i];
                    indice[cont2++] = i;
                }
            }

            NewString[cont] = '\0';

            for(i = 0; i < cont; i++)
            {
                if(i % 2 == 0)
                {
                    NewString[i] = toupper(NewString[i]);
                }
                else
                {
                    NewString[i] = tolower(NewString[i]);
                }
            }

            for(i = 0; i < cont; i++)
            {
                String[indice[i]] = NewString[i];
            }

            for(i = 0; i < strlen(String); i++)
                printf("%c", String[i]);

            printf("\n");

            cont = 0;
            cont2 = 0;
    }

    return (0);
}
