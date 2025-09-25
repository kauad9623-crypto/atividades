#include <stdio.h>
int main() {
double r, area;
const double pi = 3.14159;
printf("Digite o valor do raio do circulo: ");
scanf("%lf", &r);
area = pi * r * r;
printf("A area do circulo e: %.3lf\n", area);
return 0;
}