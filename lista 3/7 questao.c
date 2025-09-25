// 7. Inversão de um vetor
void inversao_vetor() {
    int vetor[10];
    printf("Digite 10 numeros: ");
    for (int i = 0; i < 10; i++) scanf("%d", &vetor[i]);
    printf("Vetor invertido: ");
    for (int i = 9; i >= 0; i--) printf("%d ", vetor[i]);
    printf("\n");
}