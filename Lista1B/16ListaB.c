#include <stdio.h>

void change(int *x, int *y);
int casos(int num1, int num2, int num3, int X, int Y, int Z);

int main()
{

    int A = 0, B = 0, C = 0, num1 = 0, num2 = 0, num3 = 0;
    char x, y, z;

    scanf("%d %d %d\n", &num1, &num2, &num3);
    scanf("%c %c %c", &x, &y, &z);

    casos(num1, num2, num3, x, y, z);

    return (0);
}


void change(int *x, int *y)
{
    int aux = 0;

    aux = *x;
    *x = *y;
    *y = aux;

}

int casos(int num1, int num2, int num3, int X, int Y, int Z)
{

    switch(X)
    {
        case 'A':
            if(num3 < num2)
            {
                change(&num3, &num2);
            }
            if(num3 < num1)
            {
                change(&num3, &num1);
            }
            if(num2 < num1)
            {
                change(&num2, &num1);
            }
            printf("%d ", num1);
            break;
        case 'B':
            if(num3 < num2)
            {
                change(&num3, &num2);
            }
            if(num3 < num1)
            {
                change(&num3, &num1);
            }
            if(num2 < num1)
            {
                change(&num2, &num1);
            }
            printf("%d ", num2);
            break;
        case 'C':
            if(num3 < num2)
            {
                change(&num3, &num2);
            }
            if(num3 < num1)
            {
                change(&num3, &num1);
            }
            if(num2 < num1)
            {
                change(&num2, &num1);
            }
            printf("%d ", num3);
            break;
    }

    switch(Y)
    {
        case 'A':
            if(num3 < num2)
            {
                change(&num3, &num2);
            }
            if(num3 < num1)
            {
                change(&num3, &num1);
            }
            if(num2 < num1)
            {
                change(&num2, &num1);
            }
            printf("%d ", num1);
            break;
        case 'B':
            if(num3 < num2)
            {
                change(&num3, &num2);
            }
            if(num3 < num1)
            {
                change(&num3, &num1);
            }
            if(num2 < num1)
            {
                change(&num2, &num1);
            }
            printf("%d ", num2);
            break;
        case 'C':
            if(num3 < num2)
            {
                change(&num3, &num2);
            }
            if(num3 < num1)
            {
                change(&num3, &num1);
            }
            if(num2 < num1)
            {
                change(&num2, &num1);
            }
            printf("%d ", num3);
            break;

    }
    switch(Z)
    {
        case 'A':
            if(num3 < num2)
            {
                change(&num3, &num2);
            }
            if(num3 < num1)
            {
                change(&num3, &num1);
            }
            if(num2 < num1)
            {
                change(&num2, &num1);
            }
            printf("%d ", num1);
            break;
        case 'B':
            if(num3 < num2)
            {
                change(&num3, &num2);
            }
            if(num3 < num1)
            {
                change(&num3, &num1);
            }
            if(num2 < num1)
            {
                change(&num2, &num1);
            }
            printf("%d ", num2);
            break;
        case 'C':
            if(num3 < num2)
            {
                change(&num3, &num2);
            }
            if(num3 < num1)
            {
                change(&num3, &num1);
            }
            if(num2 < num1)
            {
                change(&num2, &num1);
            }
            printf("%d ", num3);
            break;
    }
    return (0);
}