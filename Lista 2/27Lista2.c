#include <stdio.h>
 
void change(int *x, int *j)
{
    int aux;
 
    aux = *x;
    *x = *j;
    *j = aux;
}
 
int main()
{
    int N1 = 0, N2 = 0, i, j, k;
 
    scanf("%d\n%d", &N1, &N2);
 
    int vet[N1], vet2[N2], VetTotal[N1 + N2];
 
    for(i = 0; i < N1; i++)
    {
        scanf("%d", &vet[i]);
        VetTotal[i] = vet[i];
    }
    for(i = N1; i < (N2 + N1); i++)
    {
        scanf("%d", &vet2[i]);
        VetTotal[i] = vet2[i];
    }
 
    for(k = 0; k < (N1 + N2); k++)
    {
        for(j = k + 1; j < (N1 + N2); j++)
        {
            if(VetTotal[k] > VetTotal[j])
            {
                change(&VetTotal[k], &VetTotal[j]);
            }
        }
    }
 
    for(i = 0; i < (N1 + N2); i++)
    {
        printf("%d\n", VetTotal[i]);
    }
 
    return (0);
}
