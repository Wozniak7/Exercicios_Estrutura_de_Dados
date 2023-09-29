#include <stdio.h>

int main (){

    int array [5];
    int i, j;
    for(i=0; i<5; i++){
        printf("Digite o valor da posicao [%d]: \n", i);
        scanf("%d", &array[i]);
    }
    for(j=0; j<5; j++){
        if(array[j]%2==0)
            printf("Enderecos do valores pares do vetor original: %p\n", &array[j]);
    }

    return 0;
}