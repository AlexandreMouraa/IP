#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Registro
{

    int matricula;
    int DiaNascimento;
    int MesNascimento;
    int AnoNascimento;
    char *nomeAluno;
    
}RG;

void troca(RG *p, RG *s)
{

    RG aux;

    aux = *p;
    *p = *s;
    *s = aux;
}

int main()
{

    int N = 0, i, j;
    char buffer[200];

    scanf("%d", &N);

    RG Dados[N];
    
    for(i = 0; i < N; i++)
    {
        scanf("%d %d %d %d %[^\n]s", &Dados[i].matricula, &Dados[i].DiaNascimento, &Dados[i].MesNascimento, &Dados[i].AnoNascimento, buffer);
        Dados[i].nomeAluno = (char *)malloc(sizeof(char) * strlen(buffer) + 1);
        strcpy(Dados[i].nomeAluno, buffer);
    }
        
    for(i = 0; i < N; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            if(Dados[i].AnoNascimento <= Dados[j].AnoNascimento)
            {
                troca(&Dados[i], &Dados[j]);

                if(Dados[i].AnoNascimento == Dados[j].AnoNascimento)
                {
                    if(Dados[i].MesNascimento <= Dados[j].MesNascimento)
                    {
                        troca(&Dados[i], &Dados[j]);

                        if(Dados[i].MesNascimento == Dados[j].MesNascimento)
                        {
                            if(Dados[i].DiaNascimento <= Dados[j].DiaNascimento)
                                troca(&Dados[i], &Dados[j]);
                        }
                    }
                }
            }
        }
    }

    for(i = 0; i < N; i++)
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", Dados[i].matricula, Dados[i].nomeAluno, Dados[i].DiaNascimento, Dados[i].MesNascimento, Dados[i].AnoNascimento);

    for(i = 0; i < N; i++)
        free(Dados[i].nomeAluno);
    
    return (0);
}
