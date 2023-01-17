#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
void maiusculas(char * s);
 
int main()
{
    char String[10001];
 
    while(scanf("%[^\n]s", String) != EOF)
    {
        getchar();
        maiusculas(String);
    }
 
    return (0);
}
 
void maiusculas(char * s)
{
 
    int i;
 
    for(i = 0; i < strlen(s); i++)
    {
        s[i] = toupper(s[i]);
    }
 
    printf("%s\n", s);
 
}
