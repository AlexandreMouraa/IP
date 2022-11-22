#include <stdio.h>
#include <math.h>
#define PI M_PI/180

int main()
{

    double X = 0, cosseno = 0, Fatorial = 1, fator = 1, N = 0, FirstPart = 0, elevado = 2, aux = 0, aux2 = 0, SecondPart = 0;
    int i, j, k;

    scanf("%lf\n%lf", &X, &N);

    for(i = 0; i < N; i++)
    {
        for(k = 1; k <= Fatorial; k++)
        {
            fator *= k;
        }
        cosseno += (pow((-1),i)) * (pow(X,(i * 2)))/fator;
        Fatorial = i * 2;
        fator = 1;
    }

    printf("coss(%.2lf) = %.6lf", X, cosseno);

    return (0);
}
