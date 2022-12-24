#include <stdio.h>
#include <string.h>
#define N 128 + 1

int le_string(char * str, int n);
void print_codes(char * str);

int main()
{

    char str[N], s[N];
    char c;
    int i;

    scanf("%c", &c);
    le_string(str, 3);
    print_codes(str);
    printf("caracter:%c, str:%s\n", c, str);

    scanf("%c", &c);
    le_string(str, 5);
    print_codes(str);
    printf("caracter:%c, str:%s\n", c, str);

    scanf("%c", &c);
    le_string(str, 5);
    print_codes(str);
    printf("caracter:%c, str:%s\n", c, str);

    scanf("%d", &i);
    le_string(str, 3);
    print_codes(str);
    printf("inteiro:%d, str:%s\n", i, str);

    //printf("Digite inteiros separados por espaco: ");
    scanf("%d", &i);
    //printf("inteiro:%d\n", i);
    //printf("Le string (15):\n");
    le_string(str, 15);
    print_codes(str);
    printf("inteiro:%d, str:%s\n", i, str);

    //printf("Digite uma string sem espacos: ");
    scanf("%s", s);
    //printf("string:%s\n", str);
    //printf("Le string (10):\n");
    le_string(str, 100);
    print_codes(str);
    printf("string:%s, str:%s\n", s, str);

    //printf("Digite uma string com espacos: ");
    scanf("%s", s);
    //printf("string:%s\n", str);
    //printf("Le string (20):\n");
    le_string(str, 100);
    print_codes(str);
    printf("string:%s, str:%s\n", s, str);

    return 0;
}

int le_string(char * str, int n)
{
    char armazenar[1];

    scanf("%[\n^]s", armazenar);
    gets(str);
    str[n] = '\0';

    return *str;
}

void print_codes(char * str)
{

    int i;

    for(i = 0; i < strlen(str); i++)
    {
        printf("%d", str[i]);

        if(i < strlen(str) - 1)
        {
            printf(",");
        }
        else
        {
            printf("\n");
        }
    }
}
