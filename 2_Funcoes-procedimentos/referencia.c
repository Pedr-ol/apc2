#include <stdio.h>
//Por referencia

void inveter (int *x) {
    *x = -(*x);
}

int main() {
    int numero = 1;
    int num = 1;
    inveter(&num);

    printf("Número: %d\n", numero);
    printf("Número com sinal invertido: %d\n", num);

    return 0;
}