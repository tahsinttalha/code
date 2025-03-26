#include <stdio.h>

char* string(int a, int b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        string(a, b);
    }
    else
    {
        string(b, a);
    }
    
}

char* string(int a, int b)
{
    if (a % b == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
}