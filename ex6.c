#include <stdio.h>
#include <stdlib.h>

int funcao_dobro(int *, int *);

int main(){
    int a, b;
    int soma;

    printf("Digite o valor de a e b: ");
    scanf("%d%d", &a, &b);	
    soma = funcao_dobro(&a, &b);
    printf("soma dos dobro: %d", soma);

    return 0;
}

int funcao_dobro(int *a, int *b){
    *a = *a * 2;
    *b = *b * 2;

    return *a + *b;
}