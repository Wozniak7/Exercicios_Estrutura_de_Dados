#include <stdio.h>

int ordenado(int *, int*, int*);

int main()
{
    int a, b, c, resultado;

    printf("Digite o valor de a: \n");
    scanf("%d", &a);
    printf("Digite o valor de b: \n");
    scanf("%d", &b);
    printf("Digite o valor de c: \n");
    scanf("%d", &c);
    resultado = ordenado(&a, &b, &c);
    printf("\n%d\n", resultado);
    printf("valores ordenados: %d, %d, %d", a, b, c);

    return 0;
}

int ordenado(int *a, int *b, int *c)
{
    int aux = 0;
    if (*a != *b && *b != *c){
        if (*a > *b && *a > *c)
        {
            aux = *a;
            if (*b > *c)
            {
                *a = *c;
                *c = aux;
            }
            else{
            *a = *b;
            *b = *c;
            *c = aux;
            }
        }
        else if (*b > *a && *b > *c)
        {
            aux = *b;
            if (*a > *c)
            {
                *b = *a;
                *a = *c;
                *c = aux;
            }
            else{
            *b = *c;
            *c = aux;
            }
        }
        else if (*c > *a && *c > *b)
        {
            if (*a > *b)
            {
                aux = *a;
                *a = *b;
                *b = aux;
            }
        }
        return 0;
    }
    else
        return 1;
}