#include <stdio.h>

int abs(int x) {
    if (x<0) {
        return -x;
    } else {
        return x;
    }
}

int main() {
    printf("abs(-5): %d\n", abs(-5));
    printf("abs(5): %d\n", abs(5));

    return 0;
}