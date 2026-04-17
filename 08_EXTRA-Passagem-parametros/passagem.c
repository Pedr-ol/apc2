#include <stdio.h>

// passagem param por valor
void linha(int num, char ch){
	int i;
	for(i = 1; i <= num; i++)
		printf("%c", ch);
	printf("\n");
}

// passgem para valor (cópia do valor passado)
void func1(int param1, int param2) {
    param1 = 3;
    printf("func1 :: param1: %d, &param1: %p\n",
        param1, &param1);
}

// passagem param referencia (referencia da var passada)
void func2(int &param1, int &param2) {
    param1 = 3;
    printf("func2 :: param1: %d, &param1: %p\n",
        param1, &param1);
}

// passagem de param por valor (sendo endereço o valor recebido)
void func3(int *param1, int *param2) {
    *param1 = 8;
    printf("func3 :: *param1: %d, param1: %p, &param1: %p\n",
        *param1, param1, &param1);
}

int main() {
	int x = 5, y = 7;
	printf("x: %d, &x: %p\n", x, &x);
	func1(x, y);
	printf("x: %d, &x: %p\n", x, &x);
	func2(x, y);
	printf("x: %d, &x: %p\n", x, &x);
	func3(&x, &y);
	printf("x: %d, &x: %p\n", x, &x);
	
	
	
	return 0;
}