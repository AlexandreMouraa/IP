#include <stdio.h>
#include <string.h>
 
char compare(char * s1, char * s2);
 
int main()
{
 
    int N = 0; 
    char String1[500], String2[500];
 
    scanf("%d", &N);
 
    while(N)
    {
 
    getchar();
    scanf("%[^\n]s", String1);
    getchar();
    scanf("%[^\n]s", String2);
 
    printf("%c\n",compare(String1, String2));
 
    N--;
 
    }
 
    return (0);
}
 
char compare(char * s1, char * s2)
{
 
    char caractere[1];
    int i, j;
 
    if(strlen(s1) >= strlen(s2))
    {   
 
        for(i = 0; i < strlen(s1); i++)
        {
        
            if(s1[i] != s2[i])
            {
                if(s1[i] < s2[i])
                {
                    caractere[0] = '<';
                    break;
                }
                else
                {
                    caractere[0] = '>';
                    break;
                }
            }
            else
            {
                caractere[0] = '=';
            }
        }
    }
    else
    {
        for(i = 0; i < strlen(s2); i++)
        {
            if(s1[i] != s2[i])
            {
                if(s1[i] < s2[i])
                {
                    caractere[0] = '<';
                    break;
                }
                else
                {
                    caractere[0] = '>';
                    break;
                }
            }
            else
            {
                caractere[0] = '=';
            }
        }
    }
 
    return caractere[0];
}
