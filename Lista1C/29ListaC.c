#include <stdio.h>
#include <math.h>
 
double FATORIAL(int  i);
 
int main()
{
 
    double X = 0, cosseno = 0, Fatorial = 0, fator = 1;
    int i, j, k, N = 0;
 
    scanf("%lf\n%d", &X, &N);
 
    for(i = 0; i <= N; i++)
    {
        cosseno += (pow((-1),i) * pow(X,(2 * i + 1)))/FATORIAL(2 * i + 1);
    }
 
    printf("seno(%.2lf) = %.6lf\n", X, cosseno);
 
    return (0);
}
 
double FATORIAL(int  n)
{
 
    double fatorial = 1;
    int i;
 
    for(i = 1; i <= n; i++)
    {
        fatorial *= i;
    }
 
    return fatorial;
 
}
