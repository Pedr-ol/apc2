#include <stdio.h>
//Por valor

void inveter(int x) {
    x = -(x);
    printf("Número com sinal invertdo: %d\n", x);

}

int main() {
    int x = 1;
    inverter(x);
    printf("Número: %d\n", x);
    return 0;
}