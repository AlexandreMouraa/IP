#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int N = 0, i, j, cont = 0;
    char String1[10000], String2[10000], diferenca = 0;

    scanf("%d", &N);

    while (N)
    {
        getchar();
        scanf("%[^ ]s", String1);
        getchar();
        scanf("%[^\n]s", String2);

        for(i = 0; i < strlen(String1); i++)
        {
            if(String1[i] <= String2[i])
            {
                while(String1[i] < String2[i])
                {
                    cont++;
                    String1[i]++;
                }
            }
            else
            {
               diferenca = String1[i] - 123;

                while(String1[i] < String2[i])
                {
                    cont++;
                    String1[i]++;
                }

                cont += diferenca;

            }
        }

        printf("%d\n", abs(cont));
        cont = 0;

        N--;
    }

    return (0);
}
