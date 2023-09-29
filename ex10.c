#include <stdio.h>

int main (){
    int array [5];
    int i, j;
    for(i=0; i<5; i++){
    printf("Digite o valor da posicao [%d]: \n", i);
    scanf("%d", &array[i]);
    }
    for(j=0; j<5; j++){
        printf("Valores dobrados do vetor original: %d\n", *(array+j)*2);
    }

    return 0;
}