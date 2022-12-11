#include <stdio.h>
#include <string.h>

int main()
{

    int N = 0, cont = 0, i;
    char Leds[10000];

    scanf("%d", &N);

    while (N)
    {
        scanf("%s", Leds);

        for(i = 0; i < strlen(Leds); i++)
        {
            switch (Leds[i]) {
                case '0':
                    cont += 6;
                    break;
                case '1':
                    cont += 2;
                    break;
                case '2':
                    cont += 5;
                    break;
                case '3':
                    cont += 5;
                    break;
                case '4':
                    cont += 4;
                    break;
                case '5':
                    cont += 5;
                    break;
                case '6':
                    cont += 6;
                    break;
                case '7':
                    cont += 3;
                    break;
                case '8':
                    cont += 7;
                    break;
                case '9':
                    cont += 6;
                    break;
            }
        }
        printf("%d leds\n", cont);
        cont = 0;
        N--;
    }

    return (0);
}
