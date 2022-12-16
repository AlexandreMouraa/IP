#include <stdio.h>
#include <string.h>

int main()
{

    int N = 0;
    char Word[5];

    scanf("%d", &N);

    while(N)
    {
        scanf("%s", Word);

        if(strlen(Word) == 3)
        {
            if(Word[0] == 111 && Word[1] == 110  || Word[0] == 111 && Word[2] == 101|| Word[1] == 110 && Word[2] == 101)
            {
                printf("1\n");
            }
            else if(Word[0] == 116 && Word[1] == 119  || Word[0] == 116 && Word[2] == 111|| Word[1] == 119 && Word[2] == 111)
            {
                printf("2\n");
            }
        }
        else
        {
            printf("3\n");
        }

        N--;
    }

    return 0;
}
