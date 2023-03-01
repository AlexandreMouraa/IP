#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    double coeficiente;
    int expoente;
    int tamanho;//Esse tamanho foi desnecessário, mas eu optei por usá-lo para me adequar mais a ponteiros de structs, no entanto podemos notar que
    //o uso do mesmo não é de importância já que eu podia declarar de forma espontânea dentro das funções, se eu quisesse o tamanho estático.
}Polinomios;

short int Verificacao(Polinomios * Result, int termo, Polinomios Lugar[termo]);//Essa função verifica tanto na soma quanto na subtração na hora de juntar os polinômios depois realizar a operação verificando se há termos com expoentes iguais dentro do ponteiro para Result
Polinomios * Soma(int Tam1, int Tam2, Polinomios Junto[Tam1 + Tam2], Polinomios * Result);//Essa função realiza a soma dos polinomios caso chamada
Polinomios * Subtracao(int Tam1, int Tam2, Polinomios Junto[Tam1 + Tam2], Polinomios * Result);//Essa realiza a subtração quando chamada.
void change(Polinomios * p, Polinomios * k);//Essa realiza a troca no Bubblesort quando é chamada na próxima função
void ImpressaodePolinomio(Polinomios * Result);//Essa além de realizar o Bubblesort de forma decrescente, imprime os Polinômios da forma que o exercício pede.

//Essa questão infelizmente foi a única quue não passou nos testes do professor depois de 15 tentativas falhas de outros códigos semelhantes a esse, como não tem como eu testar novamente pelo fim do semestre e o professor
//ter finalizado as listas, acredito que essa versão final aqui, realiza todos os casos possíveis para soma e subtração de polinômios requisitadas pelo exercício da lista, a lista está nesta pasta para quem quiser dar uma olhada
//e dar sugestões de erros ou o que poderia ter sido feito melhor.
int main()
{

    int N = 0, j, N1 = 0, N2 = 0, i, cont, contador = 0;
    char operationMain;

    scanf("%d", &N);

    while(N--)
    {
        getchar();
        scanf("%c", &operationMain);
        scanf("%d", &N1);

        Polinomios *Resultado = NULL;
        Polinomios Operacoes1[N1];

        for(j = 0; j < N1; j++)
            scanf("%lf %d", &Operacoes1[j].coeficiente, &Operacoes1[j].expoente);

        scanf("%d", &N2);

        Polinomios Operacoes2[N2];

        for(j = 0; j < N2; j++)
            scanf("%lf %d", &Operacoes2[j].coeficiente, &Operacoes2[j].expoente);

        Polinomios Merge[N1 + N2];

        for(i = 0; i < N1; i++)
        {
            Merge[i].coeficiente = Operacoes1[i].coeficiente;
            Merge[i].expoente = Operacoes1[i].expoente;
        }

        for(i = N1, cont = 0; i < (N1 + N2) && cont < N2; i++, cont++)
        {
            Merge[i].coeficiente = Operacoes2[cont].coeficiente;
            Merge[i].expoente = Operacoes2[cont].expoente;
        }

        operationMain == '+' ? ImpressaodePolinomio(Soma(N1, N2, Merge, Resultado)) : ImpressaodePolinomio(Subtracao(N1, N2, Merge, Resultado));
        free(Resultado);
    }

    return (0);
}

short int Verificacao(Polinomios * Result, int termo, Polinomios Lugar[termo])
{
    int i;
    for(i = 0; i < Result->tamanho; i++)
    {
        if(Lugar[termo].expoente == Result[i].expoente)
            return 0;
    }
    return 1;
}

Polinomios * Soma(int Tam1, int Tam2, Polinomios Junto[Tam1 + Tam2], Polinomios * Result)
{

    int i, j, TAM = 2;

    Result = (Polinomios *)malloc(sizeof(Polinomios) * TAM);
    Result->tamanho = 0;

    for(i = 0; i < Tam1; i++)
    {
        for(j = Tam1; j < Tam1 + Tam2; j++)
        {
            if(Junto[i].expoente == Junto[j].expoente)
            {
                if(Result->tamanho > 1)
                {
                    TAM++;
                    Polinomios *aux = NULL;
                    aux = (Polinomios *) realloc(Result, sizeof(Polinomios) * TAM);
                    if(aux == NULL)
                    {
                        printf("Nao foi possivel realocar memoria\n");
                        exit(1);
                    }
                    *Result = *aux;
                }
                double coeff = Junto[i].coeficiente + Junto[j].coeficiente;
                Result[Result->tamanho].coeficiente = coeff;
                Result[Result->tamanho].expoente = Junto[i].expoente;
                Result->tamanho++;
            }
        }
    }

    int valor = Result->tamanho;

    for(i = 0; i < valor; i++)
    {
        for(j = 0; j < (Tam1 + Tam2); j++)
        {
            if(Result[i].expoente != Junto[j].expoente)
            {
                if(Verificacao(Result, j, Junto))
                {
                    TAM++;
                    Polinomios *auxx = (Polinomios *) realloc(Result, TAM * sizeof(Polinomios));
                    if(auxx == NULL)
                    {
                        printf("Nao foi possivel realocar memoria\n");
                        exit(1);
                    }
                    *Result = *auxx;
                    Result[Result->tamanho].coeficiente = Junto[j].coeficiente;
                    Result[Result->tamanho].expoente = Junto[j].expoente;
                    Result->tamanho++;
                }
            }
        }
    }

    return Result;
}

Polinomios * Subtracao(int Tam1, int Tam2, Polinomios Junto[Tam1 + Tam2], Polinomios * Result)
{

    int i, j, cont = 0, TAM = 2;

    for(i = Tam1; i < Tam1 + Tam2; i++)
        Junto[i].coeficiente *= -1;

    Result = (Polinomios *)malloc(sizeof(Polinomios) * TAM);
    Result->tamanho = 0;

    for(i = 0; i < Tam1; i++)
    {
        for(j = Tam1; j < Tam1 + Tam2; j++)
        {
            if(Junto[i].expoente == Junto[j].expoente)
            {
                if(Result->tamanho > 1)
                {
                    TAM++;
                    Polinomios *aux = NULL;
                    aux = (Polinomios *) realloc(Result, sizeof(Polinomios) * TAM);
                    if(aux == NULL)
                    {
                        printf("Nao foi possivel realocar memoria\n");
                        exit(1);
                    }
                    *Result = *aux;
                }
                double coeff = Junto[i].coeficiente + Junto[j].coeficiente;
                Result[Result->tamanho].coeficiente = coeff;
                Result[Result->tamanho].expoente = Junto[i].expoente;
                Result->tamanho++;
            }
        }
    }

    int valor = Result->tamanho;

    for(i = 0; i < valor; i++)
    {
        for(j = 0; j < (Tam1 + Tam2); j++)
        {
            if(Result[i].expoente != Junto[j].expoente)
            {
                if(Verificacao(Result, j, Junto))
                {
                    TAM++;
                    Polinomios *auxx = (Polinomios *) realloc(Result, TAM * sizeof(Polinomios));
                    if(auxx == NULL)
                    {
                        printf("Nao foi possivel realocar memoria\n");
                        exit(1);
                    }
                    *Result = *auxx;
                    Result[Result->tamanho].coeficiente = Junto[j].coeficiente;
                    Result[Result->tamanho].expoente = Junto[j].expoente;
                    Result->tamanho++;
                }
            }
        }
    }

    return Result;
}

void change(Polinomios * p, Polinomios * k)
{

    Polinomios aux;

    aux = *p;
    *p = *k;
    *k = aux;
}

void ImpressaodePolinomio(Polinomios * Result)
{

    int i, j;

    for(i = 0; i < Result->tamanho; i++)
    {
        for(j = i + 1; j < Result->tamanho; j++)
        {
            if (Result[i].expoente < Result[j].expoente)
                change(&Result[i], &Result[j]);
        }
    }

    for(i = 0; i < Result->tamanho; i++)
    {
        if((Result[i].expoente == 0 && Result[i].coeficiente == 0) || (Result[i].expoente > 0 && Result[i].coeficiente == 0)) continue;

        if(Result[i].coeficiente > 0)
            printf("+");

        if(Result[i].coeficiente != 0)
            printf("%.2lfX", Result[i].coeficiente);

        if(Result[i].expoente > 0 && Result[i].coeficiente != 0)
            printf(" ∧%d", Result[i].expoente);

    }
    printf("\n");
}
