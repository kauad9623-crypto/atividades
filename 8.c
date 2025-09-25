#include <stdio.h>

int contarOcorrencias(int matriz[4][4], int numero) {
    int contador = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == numero) {
                contador++;
            }
        }
    }
    return contador;
}

int main() {
    int matriz[4][4] = {
        {1,2,3,4},
        {5,1,6,1},
        {7,8,1,9},
        {1,10,11,1}
    };
    int numero = 1;
    printf("O número %d aparece %d vezes.\n", numero, contarOcorrencias(matriz, numero));
    return 0;
}
