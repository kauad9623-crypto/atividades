// 5. Busca por um elemento específico
void busca_elemento() {
    int vetor[10], x, encontrado = 0;
    printf("Digite 10 numeros: ");
    for (int i = 0; i < 10; i++) scanf("%d", &vetor[i]);
    printf("Digite o numero a buscar: ");
    scanf("%d", &x);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == x) {
            encontrado = 1;
            break;
        }
    }
    if (encontrado) printf("Numero encontrado!\n");
    else printf("Numero nao encontrado.\n");
}