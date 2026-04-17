#include <stdio.h>

int main(void){
    
    int n1=3, n2=5;
    int *prt1 = &n1;
    int *prt2 = &n2;
    printf("n1: %d, n2: %d\n", n1, n2);

    int n3 = *prt1;
    *prt1 = *prt2;
    *prt2 = n3;
    printf("n1: %d, n2: %d\n", n1, n2);
    return 0;
}