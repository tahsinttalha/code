#include <stdio.h>

int main()
{
    int p = 1;

    while (p <= 5)
    {
        int q = 1;
        while (q <= p)
        {
            printf("%d", p);
            q++;
        }
        printf("\n");
        p++;
    }
}