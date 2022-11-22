#include <stdio.h>
 
int main()
{
 
    double valorsalario = 0, impostoapagar = 0, valorquabrado1 = 0, valorquebrado2 = 0, valorquebrado3 = 0, aux1 = 0, aux2 = 0;
 
    scanf("%lf", &valorsalario);
    
 
    if(valorsalario >= 0 && valorsalario <= 2000)
    {
        printf("Isento\n");
    }
    if(valorsalario > 2000.01 && valorsalario <= 3000)
    {
        valorquabrado1 = valorsalario - 2000;
        impostoapagar = valorquabrado1 * 0.08;
        printf("R$ %.2lf\n", impostoapagar);
    }
    if(valorsalario > 3000.01 && valorsalario <= 4500)
    {
        valorquabrado1 = (valorsalario - 3000) * 0.18;
        aux1 = valorsalario - 3000;
        valorquebrado2 = ((valorsalario - 2000) - aux1) * 0.08;
        impostoapagar = valorquabrado1 + valorquebrado2;
        printf("R$ %.2lf\n", impostoapagar);
    }
    if(valorsalario > 4500)
    {
        aux2 = (valorsalario - 4500);
        valorquebrado3 = (valorsalario - 4500) * 0.28;
        valorquabrado1 = ((valorsalario - 3000) - aux2) * 0.18;
        aux1 = (valorsalario - 3000 - aux2);
        valorquebrado2 = (((valorsalario - 2000) - aux2) - aux1) * 0.08;
        impostoapagar = valorquabrado1 + valorquebrado2 + valorquebrado3 ;
        printf("R$ %.2lf\n", impostoapagar);
    } 
 
    return (0);
}