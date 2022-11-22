#include <stdio.h>

int main()
{

    int N = 0, digitosA, digitosB, i, inv1 = 0, inv2 = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        scanf("%d %d", &digitosA, &digitosB);

        for(;digitosA > 0;)
        {
            inv1 = 10 * inv1 + digitosA % 10;
            digitosA/= 10;
        }
        for (;digitosB > 0;)
        {
            inv2 = 10 * inv2 + digitosB % 10;
            digitosB/= 10;
        }

        if(inv1 > inv2)
        {
            printf("%d\n", inv1);
        }
        else
        {
            printf("%d\n", inv2);
        }

        inv1 = 0;
        inv2 = 0;
    }

    return(0);
}