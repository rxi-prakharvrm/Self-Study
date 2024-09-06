#include <stdio.h>

void A() {
	printf("Hello");
}

void B(void (*ptr)()) { // function pointer as argument
	ptr(); // callback function that 'ptr' points to
}

int main() {
	B(A); // A is a callback function
	return 0;
}
