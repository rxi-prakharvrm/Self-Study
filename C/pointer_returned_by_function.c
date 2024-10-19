#include <stdio.h>
#include <stdlib.h>

int* sum(int *a, int *b) {
	int *c = (int *)malloc(sizeof(int));
	*c = *a + *b;
	return c;
}

int main() {
	int a = 10, b = 20;
	int *ans = sum(&a, &b);
	printf("Sum = %d", *ans);
	return 0;
}
