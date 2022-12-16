#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
char* prefixo(int* TAM, const char String[]);
 
int main()
{
 
    int N = 0, Tam = 0, i;
    char Frase[500], *PREFIXO;
 
    scanf("%d", &N);
 
    while (N)
    {
        for(i = 0; i < 500; i++)
        {
            Frase[i] = '\0';
        }
 
        getchar();
        scanf("%d", &Tam);
        getchar();
        scanf("%[^\n]s", Frase);
 
        PREFIXO = prefixo(&Tam, Frase);
 
        printf("%s\n", PREFIXO);
 
        N--;
        }
 
        free(PREFIXO);
 
 
    return (0);
}
 
char* prefixo(int* TAM, const char String[])
{
 
    int i, indice = 0;
    char *NewString;
 
    NewString = malloc(*TAM * sizeof(int));
 
    memset(NewString, '\0', *TAM);
 
    for(i = 0; i < *TAM; i++)
        NewString[i] = String[i];
 
    return NewString;
}
