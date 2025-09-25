#include <stdio.h>

int main() {
    float r, area;
    printf("Digite o raio do circulo: ");
    scanf("%f", &r);
    area = 3.14159 * r * r;
    printf("Area = %.3f\n", area);
    return 0;
}
