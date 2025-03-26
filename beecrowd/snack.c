#include <stdio.h>

int main()
{
    int x, y;
    float value[5] = {4.00, 4.50, 5.00, 2.00, 1.50};

    scanf("%d %d", &x, &y);
    float total = value[x - 1] * y;

    printf("Total: R$ %f", total);
}