// 10. Cálculo de produto escalar
void produto_escalar() {
    int v1[5], v2[5], produto = 0;
    printf("Digite 5 numeros para o primeiro vetor: ");
    for (int i = 0; i < 5; i++) scanf("%d", &v1[i]);
    printf("Digite 5 numeros para o segundo vetor: ");
    for (int i = 0; i < 5; i++) scanf("%d", &v2[i]);
    for (int i = 0; i < 5; i++) produto += v1[i] * v2[i];
    printf("Produto escalar: %d\n", produto);
}

int main() {
    // Você pode chamar cada função aqui para testar
    soma_elementos();
    //maior_menor();
    //media_elementos();
    //contagem_pares_impares();
    //busca_elemento();
    //fatorial();
    //inversao_vetor();
    //fibonacci();
    //intercalacao();
    //produto_escalar();
    return 0;
}