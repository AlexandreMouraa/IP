#include <stdio.h>

int main()
{

    int N = 0, i;

    scanf("%d", &N);

    int vet[N];

    for(i = 1; i <= N; i++)
    {
        scanf("%d", &vet[i]);
    }

    for(i = N; i > 0; i--)
    {
        printf("%d ", vet[i]);
    }

    return (0);
}
