#include <stdio.h>

const char* number_to_string(int number);

int main()
{
    int number;
    scanf ("%d", &number);
    
    const char* string = number_to_string(number);

    if (string != NULL)
    {
        printf("The string is: %s\n", string);
    }

    return 0;
}

const char* number_to_string(int number)
{
    char* s;

    asprint(&s, "%d", number);

    return s;
}