#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct TabelaDoCurso
{
    int codigo;
    double valorcredito;
    char *nomedocurso;

}Table;

typedef struct RGAluno
{
    char *NomeStudent;
    int cursecode;
    int numerodecredito;

}Student;

int main()
{

    int N1 = 0, N2 = 0, i, j;
    char buffer[1001], buffer2[1001];

    scanf("%d", &N1);

    Table Dados[N1];

    for(i = 0; i < N1; i++)
    {
        scanf("%d\n%lf", &Dados[i].codigo, &Dados[i].valorcredito);
        getchar();
        scanf("%[^\n]s", buffer);
        Dados[i].nomedocurso = (char*) malloc(sizeof(char) * strlen(buffer) + 1);
        strcpy(Dados[i].nomedocurso, buffer);
    }

    scanf("%d", &N2);

    Student Data[N2];

    for(i = 0; i < N2; i++)
    {
        getchar();
        scanf("%[^\n]s", buffer2);
        scanf("%d\n%d", &Data[i].cursecode, &Data[i].numerodecredito);
        Data[i].NomeStudent = (char *) malloc(sizeof(char) * strlen(buffer2) + 1);
        strcpy(Data[i].NomeStudent, buffer2);
    }

    for(i = 0; i < N2; i++)
    {
        for(j = 0; j < N1; j++)
        {
            if(Dados[j].codigo == Data[i].cursecode)
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n", Data[i].NomeStudent, Dados[j].nomedocurso, Data[i].numerodecredito, Dados[j].valorcredito, (Dados[j].valorcredito * Data[i].numerodecredito));
        }
    }

    for(i = 0; i < N2; i++)
        free(Data[i].NomeStudent);

    for(i = 0; i < N1; i++)
        free(Dados[i].nomedocurso);

    return (0);
}
