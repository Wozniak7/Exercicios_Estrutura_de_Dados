#include <stdio.h>
#include <stdlib.h>

void funcao_somaA(int *, int *);

int main(){
    int a, b;

    printf("Digite o valor de a e b: ");
    scanf("%d%d", &a, &b);
    printf("valor de a e b antes da funcao: %d, %d\n", a, b);	
    funcao_somaA(&a, &b);
    printf("depois da funcao: %d, %d", a, b);

    return 0;
}

void funcao_somaA(int *a, int *b){
    *a = *a + *b;
}