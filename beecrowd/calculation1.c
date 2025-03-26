//In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.
#include <stdio.h>
 
int main() {
    int code1, code2, unit1, unit2;
    float price_pu1, price_pu2, total_price;
    scanf("%d %d %f", &code1, &unit1, &price_pu1);
    scanf("%d %d %f", &code2, &unit2, &price_pu2);

    printf("VAOR A PAGAR: R$ %.2f\n", unit1 * price_pu1 + unit2 * price_pu2);
}