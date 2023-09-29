#include <stdio.h>

int main() {
    float matriz[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = (float)(i * 3);
        }
    }

    printf("Enderecos da matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereco de matriz[%d][%d]: %p\n", i, j, &matriz[i][j]);
        }
    }

    return 0;
}
