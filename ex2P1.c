#include <stdio.h>
#include <stdlib.h>

int num_iguais (int *, int*, int);

int main(){
    int *v1 = ((int *) malloc (5 * sizeof(int)));
    int *v2 = ((int *) malloc (5 * sizeof(int)));

    int resultado = num_iguais(v1, v2, 5);

    printf("O resultado eh: %d", resultado);

}

int num_iguais(int *v1, int *v2, int n){
    int cont = 0;
    for(int i=0; i< n; i++){
        for(int j=0; j<n; j++){
            if(v1[i] == v2[j]){
                cont++;
            }
        }
    }
    return cont;

}