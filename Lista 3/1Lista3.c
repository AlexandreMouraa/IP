#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char string1[50], string2[50], NovoVetor[50];
    int N = 0, i, j, cont = 0, cont2 = 0;

    scanf("%d", &N);

    while(N--)
    {
        getchar();
        scanf("%[^ ]s", string1);
        getchar();
        scanf("%[^\n]s", string2);

        if(strlen(string1) < strlen(string2))
        {
            for(j = 0; j < strlen(string1); j++)
            {
                NovoVetor[j] = string1[j];
            }

            for(j = strlen(string1); j < strlen(string1) + strlen(string2); j++)
            {
                NovoVetor[j] = string2[cont2++];
            }

            for(i = 0; i < strlen(string1); i++)
            {
                NovoVetor[cont++] = string1[i];
                NovoVetor[cont++] = string2[i];
            }
        }
        else
        {
            for(j = 0; j < strlen(string2); j++)
            {
                NovoVetor[j] = string2[j];
            }

            for(j = strlen(string2); j < strlen(string1) + strlen(string2); j++)
            {
                NovoVetor[j] = string1[cont2++];
            }

            for(i = 0; i < strlen(string2); i++)
            {
                NovoVetor[cont++] = string1[i];
                NovoVetor[cont++] = string2[i];
            }
        }

        for(i = 0; i < strlen(string1) + strlen(string2); i++)
        {
            printf("%c", NovoVetor[i]);
        }
        printf("\n");
        cont = 0;
        cont2 = 0 ;
    }

    return (0);
}



