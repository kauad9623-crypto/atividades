// 2. Maior e menor valor em um vetor
void maior_menor() {
    int vetor[15], maior, menor;
    printf("Digite 15 numeros: ");
    for (int i = 0; i < 15; i++) scanf("%d", &vetor[i]);
    maior = menor = vetor[0];
    for (int i = 1; i < 15; i++) {
        if (vetor[i] > maior) maior = vetor[i];
        if (vetor[i] < menor) menor = vetor[i];
    }
    printf("Maior: %d, Menor: %d\n", maior, menor);
}