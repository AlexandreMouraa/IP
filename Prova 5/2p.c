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
 
    int N = 0, i, j, k = 0, cont;
 
    Clients *Cadastro;
 
    Cadastro = (Clients *)malloc(sizeof(Clients) * 4); 
    
    while(scanf("%[^\n]s", Cadastro[k].Nomecliente) != EOF)
    {
 
    cont = 4;
    getchar();
    scanf("%[^\n]s", Cadastro[k].CPF);
    scanf("%d", &Cadastro[k].vezes);
    scanf("%lf", &Cadastro[k].val_med);
    scanf("%d", &Cadastro[k].atraso);
    k++;
    getchar();
 
    if(k >= cont - 1)
    {
        cont++;
        Clients *aux;
        aux = (Clients *)realloc(Cadastro, sizeof(Clients) * cont);
        Cadastro = aux;
    }
 
    }
 
    for(i = 0; i < k; i++)
    {
        for(j = i + 1; j < k; j++)
        {
            if(2 * (Cadastro[i].vezes * Cadastro[i].val_med) - Cadastro[i].atraso > 2 *(Cadastro[j].vezes * Cadastro[j].val_med) - Cadastro[j].atraso 
            || 2 * (Cadastro[i].vezes * Cadastro[i].val_med) - Cadastro[i].atraso == 2 *(Cadastro[j].vezes * Cadastro[j].val_med) - Cadastro[j].atraso && strcmp(Cadastro[i].CPF, Cadastro[j].CPF) < 0)
                change(&Cadastro[i], &Cadastro[j]);
        }
    }
 
    for(i = k - 1; i >= 0; i--)
    {
        printf("%s\n%s\n%d\n%.2lf\n%d\n", Cadastro[i].Nomecliente, Cadastro[i].CPF, Cadastro[i].vezes, Cadastro[i].val_med, Cadastro[i].atraso);
        printf("\n");
    }
 
    free(Cadastro);
 
    return (0);
}
