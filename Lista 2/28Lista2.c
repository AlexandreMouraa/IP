#include <stdio.h>
#include <stdlib.h>
 
void Imprimir(int* Vetor, int TAM);
void Uniao(int Vet1[], int Vet2[], int* a, int* b);
void Interseccao(int Vet1[], int Vet2[], int* a, int* b);
short int Repetido(const int Vet[], int TAM, int* valor, int* indice);
 
 
int main()
{
 
    int A = 0, B = 0, i, j, Aa = 0, Bb = 0, contA = 0, contB = 0, indice = 0 ;
 
    do
    {
        scanf("%d", &A);
 
    }while(A < 1 || A > 100);
 
    do
    {
        scanf("%d", &B);
 
    }while(B < 1 || B > 100);
 
    int VetA[A], VetB[B];
 
    for(i = 0; i < A; i++)
    {
        do
        {
            scanf("%d", &VetA[i]);
            Aa = VetA[i];
            contA++;
            indice = i;
        } while (i != 0 && Repetido(VetA, contA, &Aa, &indice) > 0);
    }
 
    for(j = 0; j < B; j++)
    {
       do
       {
           scanf("%d", &VetB[j]);
           Bb = VetB[j];
           contB++;
           indice = j;
       } while (j != 0 && Repetido(VetB, contB, &Bb, &indice) > 0);
    }
 
    Uniao(VetA, VetB, &A, &B);
    Interseccao(VetA, VetB, &A, &B);
 
    return (0);
}
 
void Uniao(int Vet1[], int Vet2[], int* a, int* b)
{
 
    int i, j, k, cont = 0, cont2 = 0, Tamanhonovo = 0, Novovetor[*a + *b], igual = 0;
 
    for(i = 0; i < *a; i++)
    {
        Novovetor[i] = Vet1[i];
        cont++;
    }
        for(j = 0; j < *b; j++)
        {
            for(k = 0; k < *a; k++)
            {
                if(Vet2[j] != Novovetor[k])
                {
                    cont2++;
                    igual = Vet2[j];
                }
            }
            if(cont2 == *a)
            {
                Novovetor[cont++] = igual;
            }
            cont2 = 0;
        }
 
    Imprimir(Novovetor, cont);
 
}
 
void Interseccao(int Vet1[], int Vet2[], int* a, int* b)
{
 
    int i, j, cont = 0, Tamanhnovo = 0, Novovetor[*a + *b];
 
    for(i = 0; i < *b; i++)
    {
        for(j = 0; j < *a; j++)
        {
            if(Vet1[j] == Vet2[i])
            {
                Novovetor[cont++] = Vet2[i];
            }
        }
    }
 
    Imprimir(Novovetor, cont);
 
}
 
void Imprimir(int* Vetor, int TAM)
{
 
    int i;
 
    if(TAM == 0)
    {
        printf("()");
    }
    else
    {
        printf("(");
 
        for(i = 0; i < TAM; i++)
        {
            printf("%d", Vetor[i]);
 
            if(i != TAM - 1)
            {
                printf(",");
            }
            else
            {
                printf(")");
            }
        }
    }
 
 
    printf("\n");
 
}
short int Repetido(const int Vet[], int TAM, int* valor, int* indice)
{
    int i, j;
    short int cont = 0;
 
        for(j = 0; j < TAM; j++)
        {
            if(j != *indice && *valor == Vet[j])
            {
                cont++;
                break;
            }
        }
 
 
 
    return cont;
}
