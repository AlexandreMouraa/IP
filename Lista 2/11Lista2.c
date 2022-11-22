#include <stdio.h>

int main()
{

    int N = 0, maiorelementodeN = 0, menorelementodeW = 0, i;

    scanf("%d", &N);

    int vet[N];

    for(i = 1; i <= N; i++)
    {
        scanf("%d", &vet[i]);
    }

    for(i = 1; i <= N; i++)
    {
        printf("%d ", vet[i]);
        if(vet[i] > maiorelementodeN)
        {
            maiorelementodeN = vet[i];
        }
    }
    printf("\n");

    menorelementodeW = maiorelementodeN;

    for(i = N; i > 0; i--)
    {
        printf("%d ", vet[i]);
        if(vet[i] < menorelementodeW)
        {
            menorelementodeW = vet[i];
        }
    }
    printf("\n");
    printf("%d\n", maiorelementodeN);
    printf("%d\n", menorelementodeW);

    return (0);
}
