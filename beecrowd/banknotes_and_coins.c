#include <stdio.h>

int main()
{
    float N;
    int note, coin, count = 0;
    int denomination[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};

    scanf("%f", &N);

    //floating point precision is very important!!!
    note = N * 100 + 0.5;

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++)
    {
        count = note / denomination[i];
        printf("%d nota(s) de R$ %.2f\n", count, denomination[i] / 100.0);
        note %= denomination[i];
    }
    
    printf("MOEDAS:\n");
    for (int j = 6; j < 12; j++)
    {
        int count = note / denomination[j];
        printf("%d moeda(s) de R$ %.2f\n", count, denomination[j] / 100.0);
        note %= denomination[j];
    }
}