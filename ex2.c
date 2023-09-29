#include <stdio.h>

int main (){
    int a = 4, b = 3;

    if(&a>&b)
        printf("%p", &a);
    else    
        printf("%p", &b);

    return 0;
}