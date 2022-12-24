#include <string.h>
#include <stdio.h>

int main()
{

    int N = 0, i, k = 0, cont = 0;
    char criptografado[1001];

    scanf("%d\n", &N);

    while (N)
    {

        gets(criptografado);

        char NewString[strlen(criptografado)];

        for(i = 0; i < strlen(criptografado); i++)
        {
            if(criptografado[i] >= 65 && criptografado[i] <= 90 || criptografado[i] >= 97 && criptografado[i] <= 122)
            {
                criptografado[i] += 3;
            }
        }

        for(i = strlen(criptografado) - 1; i >= 0; i--)
        {
            NewString[cont++] = criptografado[i];
        }

        for(i = (cont/2); i < strlen(NewString) ; i++)
        {
            NewString[i]--;
        }

        for(i = 0; i < cont; i++)
            printf("%c", NewString[i]);

        printf("\n");

        cont = 0;
        N--;
    }

    return (0);
}
