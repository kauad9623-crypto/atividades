// 9. Intercalação de dois vetores
void intercalacao() {
    int v1[5], v2[5], v3[10];
    printf("Digite 5 numeros para o primeiro vetor: ");
    for (int i = 0; i < 5; i++) scanf("%d", &v1[i]);
    printf("Digite 5 numeros para o segundo vetor: ");
    for (int i = 0; i < 5; i++) scanf("%d", &v2[i]);
    for (int i = 0; i < 5; i++) {
        v3[i*2] = v1[i];
        v3[i*2+1] = v2[i];
    }
    printf("Vetor intercalado: ");
    for (int i = 0; i < 10; i++) printf("%d ", v3[i]);
    printf("\n");
}