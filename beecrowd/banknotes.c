#include <stdio.h>

int main()
{
    int value, count = 0;
    int notes[7] = {100, 50, 20, 10, 5, 2, 1};
    
    scanf("%d", &value);

    printf("%d", value);

    for (int i = 0; i < 7; i++)
    {
        count = value / notes[i];
        value %= notes[i];
        printf("%d nota(s) de R$ %d,00\n", count, notes[i]);
    }
}
