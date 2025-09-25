#include <stdio.h>
int main() {
int duracao_seg, horas, minutos, segundos;
printf("Digite a duracao em segundos: ");
scanf("%d", &duracao_seg);
horas = duracao_seg / 3600;
minutos = (duracao_seg % 3600) / 60;
segundos = duracao_seg % 60;
printf("Duracao = %02d:%02d:%02d\n", horas, minutos, segundos);
return 0;
}