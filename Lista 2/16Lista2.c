#include <stdio.h>

int main()
{

    int NumeroAlunos = 0, Minimopresenca = 0, i, j, cont = 0, cont1 = 0;

    scanf("%d %d", &NumeroAlunos, &Minimopresenca);

    int vet[NumeroAlunos];
    int presentes[NumeroAlunos];

    for(i = 0; i < NumeroAlunos; i++)
    {
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < NumeroAlunos; i++)
    {
        presentes[i] = 0;
    }

    for(i = 0; i < NumeroAlunos; i++)
    {
        if(vet[i] <= 0)
        {
            presentes[i] = i + 1;
            cont++;
        }
    }
    if(cont >= Minimopresenca)
    {
        printf("NAO\n");
        for(j = NumeroAlunos - 1; j >= 0; j--)
        {
            if(presentes[j] != 0)
            {
                printf("%d\n", presentes[j]);
            }
        }
    }
    else
    {
        printf("SIM\n");
    }

    return (0);
}