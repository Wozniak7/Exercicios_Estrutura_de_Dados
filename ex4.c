#include <stdio.h>
#include <stdlib.h>

void funcao_troca(int *, int *);

int main(){
    int a, b;

    printf("Digite o valor de a e b: ");
    scanf("%d%d", &a, &b);	
    funcao_troca(&a, &b);
    printf("valores apos a troca: a = %d, b = %d\n", a, b);

    return 0;
}

void funcao_troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}