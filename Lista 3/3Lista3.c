#include <stdio.h>
#include <string.h>

void LetterFinder(char String[]);

int main()
{

    int N = 0;
    char Frase[10000];

    scanf("%d", &N);

    while (N)
    {
        getchar();
        scanf("%[^\n]s", Frase);

        LetterFinder(Frase);

        N--;
    }

    return (0);
}

void LetterFinder(char String[])
{
    int i, Letras = 0, Consoantes = 0, Vogais = 0;

    for(i = 0; i < strlen(String); i++)
    {
        switch (String[i]) {
            case 'a':
                Vogais++;
                Letras++;
                break;
            case 'A':
                Vogais++;
                Letras++;
                break;
            case 'b':
                Letras++;
                Consoantes++;
                break;
            case 'B':
                Letras++;
                Consoantes++;
                break;
            case 'c':
                Letras++;
                Consoantes++;
                break;
            case 'C':
                Letras++;
                Consoantes++;
                break;
            case 'd':
                Letras++;
                Consoantes++;
                break;
            case 'D':
                Letras++;
                Consoantes++;
                break;
            case 'e':
                Vogais++;
                Letras++;
                break;
            case 'E':
                Vogais++;
                Letras++;
                break;
            case 'f':
                Letras++;
                Consoantes++;
                break;
            case 'F':
                Letras++;
                Consoantes++;
                break;
            case 'g':
                Letras++;
                Consoantes++;
                break;
            case 'G':
                Letras++;
                Consoantes++;
                break;
            case 'h':
                Letras++;
                Consoantes++;
                break;
            case 'H':
                Letras++;
                Consoantes++;
                break;
            case 'i':
                Vogais++;
                Letras++;
                break;
            case 'I':
                Vogais++;
                Letras++;
                break;
            case 'j':
                Letras++;
                Consoantes++;
                break;
            case 'J':
                Letras++;
                Consoantes++;
                break;
            case 'k':
                Letras++;
                Consoantes++;
                break;
            case 'K':
                Letras++;
                Consoantes++;
                break;
            case 'l':
                Letras++;
                Consoantes++;
                break;
            case 'L':
                Letras++;
                Consoantes++;
                break;
            case 'm':
                Letras++;
                Consoantes++;
                break;
            case 'M':
                Letras++;
                Consoantes++;
                break;
            case 'n':
                Letras++;
                Consoantes++;
                break;
            case 'N':
                Letras++;
                Consoantes++;
                break;
            case 'o':
                Vogais++;
                Letras++;
                break;
            case 'O':
                Vogais++;
                Letras++;
                break;
            case 'p':
                Letras++;
                Consoantes++;
                break;
            case 'P':
                Letras++;
                Consoantes++;
                break;
            case 'q':
                Letras++;
                Consoantes++;
                break;
            case 'Q':
                Letras++;
                Consoantes++;
                break;
            case 'r':
                Letras++;
                Consoantes++;
                break;
            case 'R':
                Letras++;
                Consoantes++;
                break;
            case 's':
                Letras++;
                Consoantes++;
                break;
            case 'S':
                Letras++;
                Consoantes++;
                break;
            case 't':
                Letras++;
                Consoantes++;
                break;
            case 'T':
                Letras++;
                Consoantes++;
                break;
            case 'u':
                Vogais++;
                Letras++;
                break;
            case 'U':
                Vogais++;
                Letras++;
                break;
            case 'v':
                Letras++;
                Consoantes++;
                break;
            case 'V':
                Letras++;
                Consoantes++;
                break;
            case 'w':
                Letras++;
                Consoantes++;
                break;
            case 'W':
                Letras++;
                Consoantes++;
                break;
            case 'x':
                Letras++;
                Consoantes++;
                break;
            case 'X':
                Letras++;
                Consoantes++;
                break;
            case 'y':
                Letras++;
                Consoantes++;
                break;
            case 'Y':
                Letras++;
                Consoantes++;
                break;
            case 'z':
                Letras++;
                Consoantes++;
                break;
            case 'Z':
                Letras++;
                Consoantes++;
                break;
        }
    }
    printf("Letras = %d\n", Letras);
    printf("Vogais = %d\n", Vogais);
    printf("Consoantes = %d\n", Consoantes);

}
