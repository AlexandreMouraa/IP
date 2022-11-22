#include <stdio.h>
 
int main()
{
 
    int media1 = 0, media2 = 0, media3 = 0, totaldoces = 0, Docesganhos1 = 0, Docesganhos2 = 0, Docesganhos3 = 0, Media = 0, maior = 0, segundomaior = 0, terceiromaior = 0;
    double sobrinho1 = 0, sobrinho2 = 0, sobrinho3 = 0, n1 = 0, n2 = 0, n3 = 0, m1 = 0, m2 = 0, m3 = 0;
 
    scanf("%lf %lf %lf\n%lf %lf %lf\n%lf %lf %lf", &sobrinho1, &n1, &m1, &sobrinho2, &n2, &m2, &sobrinho3, &n3, &m3);
 
    media1 = (int)(sobrinho1 + n1 + m1) / 3;
    media2 = (int)(sobrinho2 + n2 + m2) / 3;
    media3 = (int)(sobrinho3 + n3 + m3) / 3;
    
    if(media1 > media2 && media1 > media3 && media2 > media3)
    {
        Docesganhos1 = media1 * 3;
        Docesganhos2 = media2 * 2;
        Docesganhos3 = media3;
        maior = media1;
        segundomaior = media2;
        terceiromaior = media3;
    }
    if(media2 > media1 && media2 > media3 && media1 > media3)
    {
        Docesganhos1 = media2 * 3;
        Docesganhos2 = media1 * 2;
        Docesganhos3 = media3;
        maior = media2;
        segundomaior = media1;
        terceiromaior = media3;
    }
    if(media3 > media1 && media3 > media2 && media1 > media2)
    {
        Docesganhos1 = media3 * 3;
        Docesganhos2 = media1 * 2;
        Docesganhos3 = media2; 
        maior = media3;
        segundomaior = media1;
        terceiromaior = media2;
    }
    else if(media3 > media1 && media3 > media2 && media2 > media1)
    {
        Docesganhos1 = media3 * 3;
        Docesganhos2 = media2 * 2;
        Docesganhos3 = media1; 
        maior = media3;
        segundomaior = media2;
        terceiromaior = media1;
    }
    else if(media2 > media1 && media2 > media3 && media3 > media1)
    {
        Docesganhos1 = media2 * 3;
        Docesganhos2 = media3 * 2;
        Docesganhos3 = media1;
        maior = media2;
        segundomaior = media3;
        terceiromaior = media1;
    }
    
    totaldoces = Docesganhos1 + Docesganhos2 + Docesganhos3;
    
 
    printf("Total de doces a comprar: %d\n", totaldoces);
    printf("%d doces para o sobrinho com media %d\n", Docesganhos1, maior);
    printf("%d doces para o sobrinho com media %d\n", Docesganhos2, segundomaior);
    printf("%d doces para o sobrinho com media %d\n", Docesganhos3, terceiromaior);
 
    return (0);
}