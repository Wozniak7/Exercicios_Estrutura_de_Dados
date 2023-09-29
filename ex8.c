#include <stdio.h>

int main(){
    float vetor [10];

    for(int i = 0; i < 10; i++){
        vetor[i] = (float)i*2.5;
        printf("\nendereco de cada numero: %p\n", &vetor[i]);
    }
}