#include <stdio.h>

int main() {
    double preco_unitario, dinheiro, troco;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco_unitario);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco = dinheiro - (preco_unitario * quantidade);

    printf("TROCO = %.2lf\n", troco);

    return 0;
}