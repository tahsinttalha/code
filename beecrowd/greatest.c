//Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula: MajorAB = (a+b+abs(a-b))/2

//Input
//The input file contains 3 integer values.

//Output
//Print the greatest of these three values followed by a space and the message “eh o maior”.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int majorAB = (a + b + abs(a - b)) / 2;
    int majorABC = (majorAB + c + abs(majorAB - c)) / 2;

    printf("%d eh o maior\n", majorABC);
}