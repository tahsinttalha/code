#include <stdio.h>
#include <math.h>

#define pi 3.14159
 
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    float area_tri, area_cir, area_trap, area_sqr, area_rect;
    area_tri = .5 * a * c;
    area_cir = pi * pow(c, 2);
    area_trap = .5 * (a + b) * c;
    area_sqr = pow(b, 2);
    area_rect = a * b;
    printf("TRIANGULO: %.3f\n", area_tri);
    printf("CIRCULO: %.4lf\n", area_cir);
    printf("TRAPEZIO: %.3f\n", area_trap);
    printf("QUADRADO: %.3f\n", area_sqr);
    printf("RETANGULO: %.3f\n", area_rect);
    return 0;
}