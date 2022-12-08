#include <stdio.h>
 
int main()
{
 
long int CODIGO = 0, matricula = 0, guardar = 0; 
int N = 0, numerodealunos = 0, i, j, sim = 0, nao = 0, valor = 0;
double Porcentagem = 0;
char resultado;
 
scanf("%d", &N);
 
 
for(i = 0; i < N; i++)
{
    scanf("%ld\n%d", &CODIGO, &numerodealunos);
 
    for(j = 0; j < numerodealunos; j++)
    {
 
        scanf("%ld %c", &matricula, &resultado);
 
        if(resultado == 'S')
            sim++;
    }
 
    Porcentagem = ((double)sim * 100.00)/(double)numerodealunos;
 
    if(numerodealunos > valor)
    {
        guardar = CODIGO;
        valor = numerodealunos;
    }
 
    printf("Curso %ld\n", CODIGO);
    printf("Porcentagem de alunos que farao o exame %.2lf\n", Porcentagem);
    sim = 0;
    nao = 0;
}
 
    printf("O curso com o maior numero de alunos escolhido e = %ld", guardar);
 
 
    return (0);
}
 
