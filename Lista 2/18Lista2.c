#include <stdio.h>

int main()
{

    int N = 0, i, j, CPF[11], soma1 = 0, soma2 = 0, vezes = 1, vezes2 = 9;

    scanf("%d", &N);

    for(j = 0; j < N; j++)
    {
        for(i = 0; i < 11; i++)
        {
            scanf("%d", &CPF[i]);
        }
        for(i = 0; i < 9; i++)
        {
            soma1 += CPF[i] * vezes++;
        }
        for(i = 0; i < 9; i++)
        {
            soma2 += CPF[i] * vezes2--;
        }
        if(soma1 % 11 == CPF[9] && soma2 % 11 == CPF[10] || soma1 % 11 == 10 && soma2 % 11 == 10)
        {
            printf("CPF valido\n");
        }
        else
        {
            printf("CPF invalido\n");
        }
        soma1 = 0;
        soma2 = 0;
        vezes2 = 9;
        vezes = 1;
    }

    return (0);
}
