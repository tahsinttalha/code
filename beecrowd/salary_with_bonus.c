//This program calculates a salesperson's salary with a 15% bonus on the total sales made by the salesperson.
#include <stdio.h>

int main() {
    char name[50];
    double fixed_salary, total_sale;
    scanf("%s", name);
    scanf("%lf %lf", &fixed_salary, &total_sale);
    printf("TOTAL = R$ %.2lf\n", fixed_salary +(.15 * total_sale));
}