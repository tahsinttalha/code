#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < (2 * n - 1); i++) //prints the rows
    {
        for (int j = 0; j < (2 * n - 1); j++) //prints the columns
        {
            printf("%d ", n);
        }
        printf("\n");
    }
}