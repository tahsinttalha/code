#include <stdio.h>
#include <math.h>
 
int main() {
    double a, b, c, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a != 0)
    {
        x1 = (-b + sqrt(pow(b, 2) - 4 * a *c)) / (2 * a);
        x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        printf("R1 = %.5f\n", x1);
        printf("R2 = %.5f\n", x2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}