#include <stdio.h>
 
int main()
{
 
int N = 0, Loteria[6], jogado[6], i, j, k, ganho[3], cont = 0, quadra = 0, quina = 0, sena = 0, armazenador = 0; 
 
 
for(i = 0; i < 6; i++)
{
    scanf("%d", &Loteria[i]);
}
 
scanf("%d", &N);
 
for(j = 0; j < N; j++)
{
 
    for(i = 0; i < 6; i++)
    {
        scanf("%d", &jogado[i]);
    }
 
    for(i = 0; i < 6; i++)
    {
        for(k = 0; k < 6; k++)
        {
           if(Loteria[i] == jogado[k])
            {
                cont++;
            } 
        }
        
    }
 
    if(cont == 4)
    {
        quadra++;
    }
    if(cont == 5)
    {
        quina++;
    }
    if(cont == 6)
    {
        sena++;
    }
    cont = 0;
 
}
 
if(sena > 0)
{
    printf("Houve %d acertador(es) da sena\n", sena);
}
else
{
    printf("Nao houve acertador para sena\n");
}
if(quina > 0)
{
    printf("Houve %d acertador(es) da quina\n", quina);
}
else
{
    printf("Nao houve acertador para quina\n");
}
if(quadra > 0)
{
    printf("Houve %d acertador(es) da quadra\n", quadra);
}
else
{
    printf("Nao houve acertador para quadra\n");
}
 
 
return (0);
 
}
