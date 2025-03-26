#include <stdio.h>

int main()
{
    int salary; 
    float bonus;

    printf("Please Enter the Amount: ");
    scanf("%d", &salary);

    if (salary >= 10000 && salary <= 19000)
    {
        bonus = 1000;
        printf("Received bonus Taka %.2f\n", bonus);
    }
    else if (salary >= 20000 && salary <= 29000)
    {
        bonus = 1500;
        printf("Received bonus Taka %.2f\n", bonus);
    }
    else if (salary >= 30000 && salary <= 39000)
    {
        bonus = 2000;
        printf("Received bonus Taka %.2f\n", bonus);
    }
    else if (salary >= 40000 && salary <= 49000)
    {
        bonus = 2500;
        printf("Received bonus Taka %.2f\n", bonus);
    }
    else if (salary >= 50000)
    {
        printf("The highest salary is 49000 Taka.\n");
    }
    else
    {
        printf("No bonus received. \n");
    }
}