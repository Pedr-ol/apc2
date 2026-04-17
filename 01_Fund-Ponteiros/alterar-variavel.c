#include <stdio.h>

int main(void){

    int numero;
    int *ptr;
    ptr = &numero;
    scanf("%d", &numero);
    printf("(valor de numero): %d\n", numero);

    *ptr = 5;
    printf("(valor de numero): %d\n", numero);
    return 0;
}