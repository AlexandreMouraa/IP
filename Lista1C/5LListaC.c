#include <stdio.h>

int ProgressaoAritmetica(int N, int razao, int Ndetermos);


int main()
{
    int n = 0, q = 0, ntermos = 0;

    ProgressaoAritmetica(n, q, ntermos);

    return (0);
}


int ProgressaoAritmetica(int N, int razao, int Ndetermos)
{

    int ProgressaoA = 0, multidarazao = 1, i;

    scanf("%d %d %d", &N, &razao, &Ndetermos);

    for(i = 0; i < Ndetermos - 1; i++)
    {
        ProgressaoA += N + (multidarazao * razao);
        multidarazao++;
    }

    printf("%d", ProgressaoA + N);

        return (0);
}