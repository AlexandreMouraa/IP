#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int N = 0, i, j, cont = 0, diferenca = 0, cont2 = 0, resultado = 0;
    char String1[10000], String2[10000];

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
                    cont2++;
                    String1[i]++;
                }
            }
            else
            {
                diferenca = 122 - String1[i];
                cont = String2[i] - 96;
            }
            resultado += abs(diferenca) + cont2 + cont;
            diferenca = 0;
            cont2 = 0;
            cont = 0;
        }

        printf("%d\n", abs(resultado));
        resultado = 0;

        N--;
    }

    return (0);
}
