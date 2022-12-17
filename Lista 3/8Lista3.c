#include <stdio.h>
#include <string.h>

int AchaCaracter(char Letra, char String[]);

int main()
{
    int N = 0, Indice = 0, i;
    char Frase[500], Letra = '\0';

    scanf("%d", &N);

    while(N)
    {
        for(i = 0; i < 500; i++)
            Frase[i] = '\0';

        getchar();
        scanf("%c %[^\n]s", &Letra, Frase);

        Indice = AchaCaracter(Letra, Frase);

        if(Indice > 0)
            printf("Caractere %c encontrado no indice %d da string.\n", Letra, Indice);

        else if(Indice == -1)
            printf("Caractere %c nao encontrado.\n", Letra);

        N--;
    }

    return (0);
}

int AchaCaracter(char Letra, char String[])
{
    int indice = 0, i;

    for(i = 0; i < strlen(String); i++)
    {
        if(Letra == String[i])
        {
            indice = i;
            break;
        }
    }

    if(indice > 0)
        return indice;

    else
        return (-1);
}
