#include <stdio.h>
#include <stdlib.h>

struct vetor{
    float *vetor;
    int a;
    float b;
};

int main(){
    struct vetor *v, s1, s2;
    v = (struct vetor*) malloc (sizeof(struct vetor));

    v -> a = 13;
    v -> b = 0.75;
    s2.b = 23.7;

    printf("digite o valor de A: ");
    scanf("%d", &s1.a);

    printf("v -> a = %d\n", v -> a);
    printf("s1 . a = %d\n", s1.a);
    printf("s2 . b = %2.2f\n", s2.b);
    printf("v -> b = %2.2f\n", v -> b);

    return 0;
}