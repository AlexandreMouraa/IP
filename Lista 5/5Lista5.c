#include <stdio.h>
#include <string.h>

typedef struct TabelaDoCurso
{
    int codigo;
    double valorcredito;
    char nomedocurso[101];

}Table;

typedef struct RGAluno
{
    char NomeStudent[501];
    int cursecode;
    int numerodecredito;
    double mensalidade;
    char curse[101];
    double value;

}Student;

int main()
{

    int N1 = 0, N2 = 0, i, j;

    scanf("%d", &N1);

    Table Dados[N1];

    for(i = 0; i < N1; i++)
    {
        scanf("%d\n%lf", &Dados[i].codigo, &Dados[i].valorcredito);
        getchar();
        scanf("%[^\n]s", Dados[i].nomedocurso);
    }

    scanf("%d", &N2);

    Student Data[N2];

    for(i = 0; i < N2; i++)
    {
        getchar();
        scanf("%[^\n]s", Data[i].NomeStudent);
        scanf("%d\n%d", &Data[i].cursecode, &Data[i].numerodecredito);
    }

    for(i = 0; i < N1; i++)
    {
        for(j = 0; j < N2; j++)
        {
            if(Dados[i].codigo == Data[j].cursecode)
            {
                Data[j].mensalidade = Dados[i].valorcredito * Data[j].numerodecredito;
                strcpy(Data[j].curse, Dados[i].nomedocurso);
                Data[j].value = Dados[i].valorcredito;
            }
                
        }
    }

    for(i = 0; i < N2; i++)
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n", Data[i].NomeStudent, Data[i].curse, Data[i].numerodecredito, Data[i].value, Data[i].mensalidade);

    return (0);
}
