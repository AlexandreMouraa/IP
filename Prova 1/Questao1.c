#include <stdio.h>
#include <math.h>
#define PI 3.1416
 
int main ()
{
 
 
    double Volumodoclindro = 0, VolumeESfera = 0, Raio = 0, Altura = 0, RaiodaEsfera = 0, necessario = 0;
 
    scanf("%lf %lf\n%lf",&Raio, &Altura, &RaiodaEsfera);
 
 
    Volumodoclindro = PI * pow(Raio, 2) * Altura;
 
    VolumeESfera = (4 * PI * pow(RaiodaEsfera, 3))/3;
 
    necessario = Volumodoclindro/ VolumeESfera;
 
    printf("Sao necessarias: %.2lf esferas de raio %.2lf.", necessario, RaiodaEsfera);
 
 
    return (0);
}