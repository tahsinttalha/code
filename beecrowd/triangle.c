#include <stdio.h>

float calc(float a, float b, float c);

int main()
{
    float a, b, c, big, medium, small;
    scanf("%f %f %f", &a, &b, &c);

    if (a > b && a > c)
    {
        big = a;
        if (b > c)
        {
            medium = b;
            small = c;
        }
        else
        {
            medium = c;
            small = b;
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
        else
        {
            medium = c;
            small = a;
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
        else
        {
            medium = b;
            small = a;
        }
    }
    float sort[3] = {big, medium, small};

    calc(big, medium, small);

}

float calc(float a, float b, float c)
{
    float per, area;
    if (c + b > a)
    {
        per = a + b + c;
        printf("Perimetro = %.1f\n", per);
    }
    else
    {
        area = 0.5 * (a + b) * c;
        printf("Area = %.1f\n", area);
    }
}