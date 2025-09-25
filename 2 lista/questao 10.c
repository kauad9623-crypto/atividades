#include <stdio.h>

int main() {
    int duracao, h, m, s;
    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    h = duracao / 3600;
    m = (duracao % 3600) / 60;
    s = duracao % 60;

    printf("%d:%d:%d\n", h, m, s);
    return 0;
}