#include <stdio.h>
#include <string.h>

typedef struct PapaiNoel
{
    char Pais[24];
    char Idioma[24];

}Celebracoes;

short int ComparaString(Celebracoes p, char *s)
{
    int i, j;

    if(strlen(p.Pais) > strlen(s) || strlen(p.Pais) < strlen(s))
        return 1;

    for(i = 0; i < strlen(p.Pais); i++)
    {
        if(p.Pais[i] != s[i])
            return 1;
    }

    return 0;
}

int main()
{

    Celebracoes App[24] = {"brasil", "Feliz Natal!", "alemanha", "Frohliche Weihnachten!",
                           "austria", "Frohe Weihnacht!", "coreia", "Chuk Sung Tan!",
                           "espanha", "Feliz Navidad!", "grecia", "Kala Christougena!",
                           "estados-unidos", "Merry Christmas!", "inglaterra", "Merry Christmas!",
                           "australia", "Merry Christmas!", "portugal", "Feliz Natal!",
                           "suecia", "God Jul!", "turquia", "Mutlu Noeller",
                           "argentina", "Feliz Navidad!", "chile", "Feliz Navidad!",
                           "mexico", "Feliz Navidad!", "antartida", "Merry Christmas!",
                           "canada", "Merry Christmas!", "irlanda", "Nollaig Shona Dhuit!",
                           "belgica", "Zalig Kerstfeest!", "italia", "Buon Natale!",
                           "libia", "Buon Natale!", "siria", "Milad Mubarak!",
                           "marrocos", "Milad Mubarak!", "japao", "Merii Kurisumasu!"};

    int i, cont = 0;
    char Language[24];

    while(scanf("%[^\n]s", Language) != EOF)
    {
        getchar();
        for(i = 0; i < 24; i++)
        {
            if(ComparaString(App[i], Language) == 0)
            {
                printf("%s\n", App[i].Idioma);
                cont++;
            }
        }

        if(cont == 0)
            printf("--NOT FOUND--\n");

        cont = 0;
    }

    return (0);
}
