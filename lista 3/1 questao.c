#include <stdio.h>

// 1. Soma dos elementos de um vetor
void soma_elementos() {
    int vetor[10], soma = 0;
    printf("Digite 10 numeros: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    printf("Soma dos elementos: %d\n", soma);
}
