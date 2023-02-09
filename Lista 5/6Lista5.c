#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N = 0, i;
    char vetor[1000], **buffer = NULL;

    scanf("%d", &N);

    buffer = (char **) malloc(sizeof(char *) * N);

    for(i = 0; i < N; i++)
    {
        getchar();
        scanf("%[^\n]s", vetor);

        buffer[i] = (char *)malloc(sizeof(char) * strlen(vetor) + 1);
        strcpy(buffer[i], vetor);

        printf("%s\n", buffer[i]);
    }

    free(buffer);

    return (0);
}
