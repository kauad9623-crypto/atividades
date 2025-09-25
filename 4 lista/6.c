#include <stdio.h>

void somaDiagonais(int matriz[3][3]) {
    int diagPrincipal = 0, diagSecundaria = 0;

    for (int i = 0; i < 3; i++) {
        diagPrincipal += matriz[i][i];
        diagSecundaria += matriz[i][2 - i];
    }

    printf("Soma diagonal principal: %d\n", diagPrincipal);
    printf("Soma diagonal secundária: %d\n", diagSecundaria);
}

int main() {
    int matriz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    s
}