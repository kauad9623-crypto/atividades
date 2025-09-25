#include <stdio.h>

int main() {
    float A, B, C;
    printf("Digite as medidas A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    printf("Area do quadrado = %.4f\n", A * A);
    printf("Area do triangulo = %.4f\n", (A * B) / 2);
    printf("Area do trapezio = %.4f\n", ((A + B) * C) / 2);
    return 0;
}