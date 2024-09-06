#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int asc(int a, int b) {
	return (a > b) ? true : false;
}

int desc(int a, int b) {
	return (a < b) ? true : false;
}

int abs_asc(int a, int b) {
	return (abs(a) > abs(b)) ? true : false;
}

int abs_desc(int a, int b) {
	return (abs(a) < abs(b)) ? true : false;
}
	

void bubbleSort(int *arr, int n, int (*compare)(int, int)) {
	for(int i = n; i >= 0; i--) {
		for(int j = 0; j < i-1; j++) {
			if(compare(arr[j], arr[j+1])) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void print(int *arr, int n) {
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int arr[] = {-23, 12, 5, -2, 65, -38};
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n, abs_asc);
	print(arr, n);
	return 0;
}
