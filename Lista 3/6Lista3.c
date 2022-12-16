#include <stdio.h>
#include <string.h>

short int Diferente(char string[], char Contrario[], int TAM);

int main()
{

    char Palavra[200], reserva[1], AoContrario[200];
    int i, cont = 0;

    while (scanf("%s", Palavra) != EOF)
    {

        for(i = strlen(Palavra) - 1; i >= 0; i--)
        {
            AoContrario[cont++] = Palavra[i];
        }

        if(Diferente(Palavra, AoContrario, cont) > 0)
        {
            printf("nao\n");
        }
        else
        {
            printf("sim\n");
        }

        cont = 0;

    }

    return (0);
}


short int Diferente(char string[], char Contrario[], int TAM)
{
    short int cont = 0;
    int i;

    for(i = 0; i < TAM; i++)
    {
        if(string[i] != Contrario[i])
        {
            cont++;
        }
    }

    return cont;
}
