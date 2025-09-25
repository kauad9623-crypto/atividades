#include <stdio.h>

int main() {
    float preco, dinheiro, total, troco;
    int quantidade;
    printf("Preco unitario do produto: ");
    scanf("%f", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro dado pelo cliente: ");
    scanf("%f", &dinheiro);

    total = preco * quantidade;

    if (dinheiro < total) {
        printf("Dinheiro insuficiente. Faltam R$ %.2f\n", total - dinheiro);
    } else {
        troco = dinheiro - total;
        printf("Troco: R$ %.2f\n", troco);
    }

    return 0;
}
