#include <stdio.h>

int nameLength(char *name) {
	int len = 0;
	for(int i = 0; name[i] != '\0'; i++) {
		len++;
	}
	return len;
}

void greet(char *str) {
	printf("Hello %s\n", str);
}

int main() {
	char *name = "Prakhar";

	void (* greetPtr)(char *) = &greet;
	(*greetPtr)(name);

	// function pointers can also be initialized without '&' sign
	// function pointers can be called without using '*' sign
	int len = 0;
	int (* nameLengthPtr)(char *) = nameLength;
	len = nameLengthPtr(name);
	printf("The length of your name is: %d\n", len);

	return 0;
}
