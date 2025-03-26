//This program converts integers to strings and prints the string.
//123 ---> "123"

#include <stdio.h>
#include <stdlib.h>

char *number_to_string(int number);

int main()
{
    int number;
    scanf ("%d", &number);
    
    char* string = number_to_string(number);

    if (string != NULL)
    {
        printf("The string is: %s\n", string);
        free(string);
    }

    return 0;
}

char *number_to_string(int number)
{
    // calculate the size of the string
    int size = snprintf(NULL, 0, "%d", number) + 1; // +1 for the null terminator

    // allocate memory for the string
    char *string = (char*)malloc(size);

    if (string == NULL)
    {
        return NULL;    //handle allocation failure
    }

    // convert the number to a string
    snprintf(string, size, "%d", number);

    // return the string
    return string;
}