#include <stdio.h>

int main() {
    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("Nota final: %.1f\n", media);

    if (media < 60.0)
        printf("REPROVADO\n");
    else
        printf("APROVADO\n");

    return 0;
}
