#include <stdio.h>

struct s {
	int a;
	int arr[10];
} obj;

int main() {
	printf("%d\n", sizeof(obj));
	return 0;
}




