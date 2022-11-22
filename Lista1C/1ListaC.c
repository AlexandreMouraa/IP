#include <stdio.h>

int Arrecadacao(int n);

int main()
{
    int N = 0;

    Arrecadacao(N);

    return (0);
}

int Arrecadacao(int n) {


int numerodepessoas, teste = 1, i;
double CategoriaPopular, CategoriaGeral, CategoriaArquibancada, CategoriaCadeiras, RendadojogoTotal = 0;

    scanf("%d",&n);

for(i = 0; i < n; i++)
{
    scanf("%d %lf %lf %lf %lf", &numerodepessoas, &CategoriaPopular, &CategoriaGeral, &CategoriaArquibancada, &CategoriaCadeiras);
    RendadojogoTotal = ((numerodepessoas * CategoriaPopular)/100) + (((numerodepessoas * CategoriaGeral)/100) * 5) + (((numerodepessoas * CategoriaArquibancada)/100) * 10) + (((numerodepessoas * CategoriaCadeiras)/100) * 20);
    printf("A RENDA DO JOGO N. %d E = %.2lf\n", teste++, RendadojogoTotal);
}

    return (0);
}