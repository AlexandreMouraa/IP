#include <stdio.h>

void reverso(int n)
{

    int inv = 0;

    for(;n > 0;)
    {
        inv = 10 * inv + n % 10;
        n/= 10;
    }

    printf("%d", inv);
}

int main()
{

    int N = 0;

    scanf("%d", &N);

    reverso(N);

    return(0);

}