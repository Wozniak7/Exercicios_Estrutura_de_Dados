#include <stdio.h>

int main (){
    int a,b;

    printf("digite o valor de A e B: ");
    scanf("%d %d", &a, &b);
    printf("%p %p\n", &a, &b);

    if(&a>&b)
        printf("%d", a);
    else    
        printf("%d", b);

    return 0;
}