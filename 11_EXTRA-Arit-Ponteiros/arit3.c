#include <stdio.h>

int main(void) {

  printf("sizeof(int): %d\n", (int)sizeof(int));
  printf("sizeof(short int): %d\n", (int)sizeof(short int));
  printf("sizeof(long int): %d\n", (int)sizeof(long int));
  printf("sizeof(char): %d\n", (int)sizeof(char));
  printf("sizeof(float): %d\n", (int)sizeof(float));
  printf("sizeof(double): %d\n", (int)sizeof(double));
  
  int inteiro = 100; // &inteiro = 0x100
  printf("i: %d, i+1: %d, i+20: %d\n", inteiro, inteiro+1, inteiro+20);
  printf("i: %d, i-1: %d, i-20: %d\n", inteiro, inteiro-1, inteiro-20);

  short int *pint = (short int *)&inteiro;
  printf("pint: %lu, pint+1: %lu, pint+20: %lu\n", pint, pint+1, pint+20);
  printf("pint: %lu, pint-1: %lu, pint-20: %lu\n", pint, pint-1, pint-20);

  char *pchar = (char *)&inteiro;
  printf("pchar: %lu, pchar+1: %lu, pchar+20: %lu\n", pchar, pchar+1, pchar+20);
  printf("pchar: %lu, pchar-1: %lu, pchar-20: %lu\n", pchar, pchar-1, pchar-20);

  
  return 0;
}