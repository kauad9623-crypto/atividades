#include <stdio.h>
int main() {
int numero_func, horas;
double valor_hora, pagamento;
printf("Digite o numero do funcionario: ");
scanf("%d", &numero_func);
printf("Digite o valor que recebe por hora: ");
scanf("%lf", &valor_hora);
printf("Digite a quantidade de horas trabalhadas: ");
scanf("%d", &horas);
pagamento = valor_hora * horas;
printf("Numero = %d\n", numero_func);
printf("Pagamento = R$ %.2lf\n", pagamento);
return 0;
}