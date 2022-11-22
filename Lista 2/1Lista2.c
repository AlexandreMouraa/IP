#include <stdio.h>


int achavetor(const int vet[], int n, int TESTE)
{
    int i = 0;

    for(i = 0; i < n; i++)
    {
        if(TESTE == vet[i])
        {
            return 1;
        }
    }

    return 0;
}

int main()
{

    int N = 0, teste = 0, i, j, teste2, Var = 0;

    scanf("%d", &N);

    int vetor[N];

    for(i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &teste);

    for(i = 0; i < teste; i++)
    {
        scanf("%d", &teste2);

        if(achavetor(vetor, N, teste2))
        {
            printf("ACHEI\n");

        }
        else
        {
            printf("NAO ACHEI\n");
        }
    }

    return (0);
}
