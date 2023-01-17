#include <stdio.h>
#include <string.h>
 
int i, k;
 
void tradutorSA(int *N, char *string, int n)
{
    for (i = 0; i < n; i++)
    {
        switch (string[i])
        {
            case '0':
                N[i] = 0;
                break;
 
            case '1':
                N[i] = 1;
                break;
 
            case '2':
                N[i] = 2;
                break;
 
            case '3':
                N[i] = 3;
                break;
 
            case '4':
                N[i] = 4;
                break;
 
            case '5':
                N[i] = 5;
                break;
 
            case '6':
                N[i] = 6;
                break;
 
            case '7':
                N[i] = 7;
                break;
 
            case '8':
                N[i] = 8;
                break;
 
            case '9':
                N[i] = 9;
                break;
        }
    }
}
 
int main()
{
    int n, nr;
    int imaior = 0, aux, index = 0, maiorvalor = 0;
 
    while (1)
    {
        scanf("%d %d\n", &n, &nr);
 
        if (n == 0 && nr == 0)
        {
            return 0;
        }
 
        char string[n + 1];
        int numeros[n];
        int maiores[nr];
        int contador = nr;
        aux = nr;
 
        scanf("%s", string);
        getchar();
 
        tradutorSA(numeros, string, n);
 
        while (contador--)
        {
            for (i = imaior; i <= n - aux; i++)
            {
                if (numeros[i] > maiorvalor)
                {
                    maiorvalor = numeros[i];
                    imaior = i + 1;
                }
            }
            aux--;
            maiores[index++] = maiorvalor;
            maiorvalor = 0;
        }
 
        for (i = 0; i < nr; i++)
        {
            printf("%d", maiores[i]);
        }
 
        printf("\n");
 
        index = 0;
        imaior = 0;
        maiorvalor = 0;
    }
 
    return 0;
}
