#include <stdio.h>
#include <stdlib.h>

void funcao_maior(int *, int *);

int main(){
    int a, b;

    printf("Digite o valor de a e b: ");
    scanf("%d%d", &a, &b);	
    funcao_maior(&a, &b);
    printf("valor maior %d, valor menor %d", a, b);

    return 0;
}

void funcao_maior(int *a, int *b){
    int aux;
    if(*a < *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}