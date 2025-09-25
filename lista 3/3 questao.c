// 3. Média dos elementos de um vetor
void media_elementos() {
    int vetor[8];
    float soma = 0;
    printf("Digite 8 numeros: ");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    printf("Media: %.2f\n", soma/8);
}