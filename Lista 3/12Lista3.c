#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 100
 
int main()
{
 
    char String[N], Letra;
    int i, j, cont = 0, cont2 = 0, verificador = 0;
 
    while(scanf("%[^\n]s", String) != EOF)
    {
        getchar();
        Letra = String[0];
        for (i = 0; i < strlen(String); i++)
        {
            for (j = i + 1; j < strlen(String); j++)
            {
                if (String[j] == ' ')
                {
                    if (tolower(String[i]) == tolower(String[j + 1]) && verificador < 1 && tolower(String[j + 1]) == tolower(Letra))
                    {
                        cont2 = 1;
                        Letra = String[j + 1];
                        verificador++;
                        break;
                    }
                    else
                    {
                        if (tolower(String[j + 1]) == tolower(Letra))
                        {
                            verificador = 1;
                            cont2 = 0;
                            Letra = String[j + 1];
                            break;
                        }
                        else
                        {
                            verificador = 0;
                            cont2 = 0;
                            Letra = String[j + 1];
                            break;
                        }
                    }
                }
            }
            i = j;
            cont += cont2;
            cont2 = 0;
        }
 
        printf("%d\n", cont);
        cont = 0;
        cont2 = 0;
        verificador = 0;
    }
 
    return (0);
}
