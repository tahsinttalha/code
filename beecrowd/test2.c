#include <stdio.h>

int main()
{
    int n;

    printf("Enter line number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i ; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            printf("Break line!\n");
        }
        
    }
}