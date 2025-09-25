#include <stdio.h>

void inverterLinhasColunas(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }
}

void imprimirMatriz3x3(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    inverterLinhasColunas(matriz);
    imprimirMatriz3x3(matriz);
    return 0;
}
