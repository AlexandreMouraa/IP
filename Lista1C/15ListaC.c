#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    double N = 0, erro = 0, raiz = 1, Mistake = 0, MainRaiz = 0, Finally = 0;

    scanf("%lf", &N);
    scanf("%lf", &erro);

    do
    {
        MainRaiz = (raiz + (N/raiz))/2;
        Mistake = N - pow(MainRaiz,2);
        printf("r: %.9lf, erro: %.9lf\n", MainRaiz, fabs(Mistake));
        Finally = Mistake;
        Mistake = 0;
        raiz = MainRaiz;
        MainRaiz = 0;
    } while (Finally * - 1  > erro);

    return (0);
}