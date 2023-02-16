#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct CL
{
    char Nomecliente[300], CPF[11];
    int vezes;
    double val_med;
    int atraso;
 
}Clients;
 
void change(Clients * p, Clients * s)
{
 
    Clients aux;
 
    aux = * p;
    * p = * s;
    * s = aux;
}
 
int main()
{
 
    int N = 0, i, j;
 
    scanf("%d", &N);
 
    Clients Cadastro[N];
 
    for(i = 0; i < N; i++)
    {
        getchar();
        scanf("%[^\n]s", Cadastro[i].Nomecliente);
        getchar();
        scanf("%[^\n]s", Cadastro[i].CPF);
        scanf("%d", &Cadastro[i].vezes);
        scanf("%lf", &Cadastro[i].val_med);
        scanf("%d", &Cadastro[i].atraso);
    }
 
    for(i = 0; i < N; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            if(2 * (Cadastro[i].vezes * Cadastro[i].val_med) - Cadastro[i].atraso > 2 *(Cadastro[j].vezes * Cadastro[j].val_med) - Cadastro[j].atraso 
            || 2 * (Cadastro[i].vezes * Cadastro[i].val_med) - Cadastro[i].atraso == 2 *(Cadastro[j].vezes * Cadastro[j].val_med) - Cadastro[j].atraso && strcmp(Cadastro[i].CPF, Cadastro[j].CPF) < 0)
                change(&Cadastro[i], &Cadastro[j]);
        }
    }
 
    for(i = N - 1; i >= 0; i--)
    {
        printf("%s\n%s\n%d\n%.2lf\n%d\n", Cadastro[i].Nomecliente, Cadastro[i].CPF, Cadastro[i].vezes, Cadastro[i].val_med, Cadastro[i].atraso);
        printf("\n");
    }
 
    return (0);
}
