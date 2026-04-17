#include <stdio.h>
int main()
{
    int n = 1025;
    char *pc;
    pc = (char *)&n;
    // pc = pc+1;
    printf("*pc: %d, pc[0]: %d\n", *(pc+0), pc[0]);
    printf("*pc: %d, pc[1]: %d\n", *(pc+1), pc[1]);
    printf("*pc: %d, pc[2]: %d\n", *(pc+2), pc[2]);
    return 0;
}