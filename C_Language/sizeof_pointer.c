#include <stdio.h>

struct s {
	int a;
	int arr[10];
} obj;

int main() {
	struct s *p = NULL;
	printf("%d\n", sizeof(obj));
	printf("%d\n", sizeof(p));
	return 0;
}




