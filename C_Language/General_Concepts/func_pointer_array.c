#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int prod(int a, int b) {
	return a * b;
}

int sub(int a, int b) {
	return a - b;
}

int div(int a, int b) {
	return a / b;
}

int main() {
	int (* func_ptr[])(int, int) = {add, prod, sub, div};
	printf("%d\n", (*func_ptr[0])(20, 10));
	return 0;
}
