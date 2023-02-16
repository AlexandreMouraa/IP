#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
char * newstrcat(char * s1, char *s2)
{
    int i, j, cont;
    char *Concatenada;
    
    Concatenada = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 2);
 
    if(Concatenada == NULL)
        printf("NAO HOUVE MEMORIA PARA A CONCATENACAO\n");
 
    else
    {
        for(i = 0; i < strlen(s1); i++)
        {
            Concatenada[i] = s1[i];
        }
        Concatenada[strlen(s1)] = ' ';
        for(i = strlen(s1) + 1, cont = 0; i <= strlen(s1) + strlen(s2) && cont < strlen(s2); i++, cont++)
        {
            Concatenada[i] = s2[cont];
        }
    }
 
    return Concatenada;
}
 
int main()
{
 
int N = 0, i, j;
char string1[201], string2[201], *Newstring;
 
scanf("%d", &N);
 
for(i = 0; i < N; i++)
{
    getchar();
    scanf("%[^\n]s", string1);
    getchar();
    scanf("%[^\n]s", string2);
 
    Newstring = newstrcat(string1, string2);
 
    printf("%s\n", Newstring);
}
    
    free(Newstring);
 
    return (0);
}
