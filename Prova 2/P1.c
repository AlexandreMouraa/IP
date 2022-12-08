#include <stdio.h>
 
 
int main()
{
 
int N = 0, i, FEM = 0, MASC = 0, SIM = 0, NAO = 0, sexo = 0, resultado = 0, women = 0, men = 0;
double Sim = 0, nao = 0;
 
scanf("%d", &N);
 
for(i = 0; i < N; i++)
{
 
    scanf("%d %d", &sexo, &resultado);
 
    if(sexo == 2)
    {
        men++;
        if(resultado == 2)
        {
            MASC++;
        }
    }
    if(sexo == 1)
    {
        women++;
        if(resultado == 1)
        {
            FEM++;
        }
    }
 
    if(resultado == 1)
    {
        SIM++;
    }
    else if(resultado == 2)
    {
        NAO++;
    }
 
}
 
Sim = ((double)FEM * 100)/women;
nao = ((double)MASC * 100)/men;
 
printf("SIM = %d\n", SIM);
printf("NAO = %d\n", NAO);
printf("FEMININO - SIM = %.2lf\n", Sim);
printf("MASCULINO - NAO = %.2lf\n", nao);
    
 
    return (0);
}
 
