#include <stdio.h>
#include <math.h>
 
 
 void troca(double *x, double *y)
 {
 
    double aux;
 
    aux = *x;
    *x = *y;
    *y = aux;
 }
 
 
int main()
{
 
int i = 0, j, k;
double valor1 = 0, valor2 = 0, valor3 = 0, valor4 = 0, maior = 0;
 
while (scanf("%d %lf %lf %lf %lf", &i, &valor1, &valor2, &valor3, &valor4) != EOF)
{
 
    if(i == 1)
    {
        for(j = 0; j < 4; j++)//Não era necessário um loop com parada até 4, até 2 já era suficiente.
        {
            if(valor4 < valor3)
            {
                troca(&valor4, &valor3);
            }
            if(valor3 < valor2)
            {
                troca(&valor3, &valor2);
            }
            if(valor2 < valor1)
            {
                troca(&valor2, &valor1);
            }
        }
 
        printf("%.2lf %.2lf %.2lf %.2lf\n", valor1, valor2, valor3, valor4);
    }
    if(i == 2)
    {
        for(j = 0; j < 4; j++)//Não era necessário um loop com parada até 4, até 2 já era suficiente.
        {
            if(valor4 > valor3)
            {
                troca(&valor4, &valor3);
            }
            if(valor3 > valor2)
            {
                troca(&valor3, &valor2);
            }
            if(valor2 > valor1)
            {
                troca(&valor2, &valor1);
            }
        }
 
        printf("%.2lf %.2lf %.2lf %.2lf\n", valor1, valor2, valor3, valor4);
    }
    if(i == 3)
    {
        for(j = 0; j < 4; j++)//Não era necessário um loop com parada até 4, até 2 já era suficiente.
        {
            if(valor4 < valor3)
            {
                troca(&valor4, &valor3);
            }
            if(valor3 < valor2)
            {
                troca(&valor3, &valor2);
            }
            if(valor2 < valor1)
            {
                troca(&valor2, &valor1);
            }
        }
        printf("%.2lf %.2lf %.2lf %.2lf\n", valor1, valor2, valor4, valor3);
    
    }
    
}
 
    return (0);
}
 
