#include <stdio.h>
#include <stdlib.h>
 
typedef struct Twiiter
{
    int Likes, retweets, mencoes;
}Users;
 
int main()
{
 
    int N = 0, i, j, casos = 0, k, g, somaLikes = 0, somaRetweets = 0, somamencoes = 0, Likes = 0, retweets = 0, mencoes = 0;
    scanf("%d", &N);
 
    Users *Matriz[1000][1000];
 
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
            Matriz[i][j] = NULL;
    }
 
    scanf("%d", &casos);
 
    while(casos--)
    {
        scanf("%d %d %d %d %d", &k, &g, &Likes, &retweets, &mencoes);
        Matriz[k][g] = (Users *)malloc(sizeof(Users));
        Matriz[k][g]->Likes = Likes;
        Matriz[k][g]->retweets = retweets;
        Matriz[k][g]->mencoes = mencoes;
    }
 
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(Matriz[i][j] != NULL)
            {   
                somaLikes += Matriz[i][j]->Likes;
                somaRetweets += Matriz[i][j]->retweets;
                somamencoes += Matriz[i][j]->mencoes;
            }
        }
        if(somaLikes != 0 || somamencoes != 0 || somaRetweets != 0)
                printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", i, somaLikes, somaRetweets, somamencoes);
        free(Matriz[i][j]);
        somaLikes = 0;
        somamencoes = 0;
        somaRetweets = 0;
    }
 
    return (0);
}
