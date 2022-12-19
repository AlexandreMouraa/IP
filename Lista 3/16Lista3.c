#include <string.h>
#include <stdio.h>
#define N 256
 
void str_clean(char String[], char Clear[]);
 
int main()
{
 
    char str[N];
    char clr[N];
 
    scanf("%[^\n]s", str);
    scanf("\n%[^\n]s", clr);
 
    str_clean(str, clr);
 
    printf("%s\n", str);
 
    return (0);
}
 
void str_clean(char String[], char Clear[])
{
 
    int i, j, cont = 0, cont2 = 0, k = 0, contador = 0;
    char NewVector[N];
 
    for(i = 0; i < strlen(String); i++)
    {
        for(j = 0; j < strlen(Clear); j++)
        {
            if(String[i] != Clear[j])
                NewVector[i] = String[i];
            else
            {
                NewVector[i] = '*';
                break;
            }
        }
    }
 
    while(k < strlen(String))
    {
        if(NewVector[k] != '*')
            String[cont2++] = NewVector[k];
 
        k++;
    }
 
    String[cont2] = '\0';
 
}
