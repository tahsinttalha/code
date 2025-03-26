#include <stdio.h>
#include <math.h>

float sort(float a, float b, float c);

float big, medium, small;

int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    sort (a, b, c);
    
    if (big >= medium + small)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if (pow(big, 2) == pow(medium, 2) + pow(small, 2))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if (pow(big, 2) > pow(medium, 2) + pow(small, 2))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (pow(big, 2) < pow(medium, 2) + pow(small, 2))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (big == medium && medium == small)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if (big == medium && big != small || medium == small && medium != big || big == small && big != medium)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
}

float sort(float a, float b, float c)
{
    if (a > b && a > c)
    {
        big = a;
        if (b > c)
        {
            medium = b;
            small = c;
        }
        else if (c > b)
        {
            medium = c;
            small = b;
        }
        else
        {
            medium = c;
            small = medium;
        }
    }
    else if (b > a && b > c)
    {
        big = b;
        if (a > c)
        {
            medium = a;
            small = c;
        }
        else if (c > a)
        {
            medium = c;
            small = a;
        }
        else
        {
            medium = c;
            small = medium;
        }
    }
    else
    {
        big = c;
        if (a > b)
        {
            medium = a;
            small = b;
        }
        else if (a < b)
        {
            medium = b;
            small = a;
        }
        else
        {
            medium = b;
            small = medium;
        }
    }
    return big;
    return medium;
    return small;
}