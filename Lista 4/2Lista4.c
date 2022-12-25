#include <stdio.h>

void imprimeMatrizDP(int n, int matriz[n][n]);

int main()
{

    int N = 0;

    scanf("%d", &N);

    int matriz[N][N], i, j;

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    imprimeMatrizDP(N, matriz);

    return (0);
}

void imprimeMatrizDP(int n, int matriz[n][n])
{

    int i, j, k = 0;

    for(i = 0; i < n; i++)
    {
        printf("%d\n", matriz[i][k++]);
    }

}
