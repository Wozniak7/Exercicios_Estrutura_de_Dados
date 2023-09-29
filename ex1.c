#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *ponteiroInteiro;
    float *ponteiroReal;
    char *ponteiroChar;

    ponteiroInteiro = &inteiro;
    ponteiroReal = &real;
    ponteiroChar = &caractere;

    printf("Valores antes da modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    // Modificando os valores usando os ponteiros
    *ponteiroInteiro = 20;
    *ponteiroReal = 2.71828;
    *ponteiroChar = 'B';

    printf("\nValores apos a modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.5f\n", real);
    printf("Char: %c\n", caractere);

    return 0;
}
