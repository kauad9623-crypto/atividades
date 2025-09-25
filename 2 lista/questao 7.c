#include <stdio.h>

int main() {
    char nome[50];
    float valorHora, pagamento;
    int horas;

    printf("Nome do funcionario: ");
    scanf("%s", nome);
    printf("Valor por hora: ");
    scanf("%f", &valorHora);
    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    pagamento = valorHora * horas;
    printf("O pagamento para %s deve ser %.2f\n", nome, pagamento);
    return 0;
}
