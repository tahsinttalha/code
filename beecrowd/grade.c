#include <stdio.h>

int main()
{
    int number;

    printf("Enter the number: ");
    scanf("%d", &number); //assigns the input to number variable.

    if (number <= 100 && number >= 80)
    {
        printf("Grade A+\n");
    }

    else if (number < 80 && number >= 75)
    {
        printf("Grade A\n");
    }

    else if (number < 75 && number >= 70)
    {
        printf("Grade A-\n");
    }

    else if (number <= 69 && number >= 65)
    {
        printf("Grade B+\n");
    }

    else if (number <= 64 && number >= 60)
    {
        printf("Grade A+\n");
    }

    else if (number < 60 && number >= 0)
    {
        printf("Grade F\n");
    }

    else 
    {
        printf("Invalid Number\n");
    }

}