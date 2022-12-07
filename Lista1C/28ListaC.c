#include <stdio.h>
#include <math.h>
 
double FATORIAL(int  i);
 
int main()
{
 
    double X = 0, e = 0, Fatorial = 0, fator = 1;
    int i, j, k, N = 0;
 
    scanf("%lf\n%d", &X, &N);
 
    for(i = 0; i <= N; i++)
    {
        e += pow(X,(i))/FATORIAL(i);
    }
 
    printf("e^%.2lf = %.6lf\n", X, e);
 
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
