#include <stdio.h>
#include <stdlib.h> // qsort function

int compare(const void *a, const void *b) {
	int x = *((int*)a);
	int y = *((int*)b);
	return x > y;
}

int main() {
	int arr[] = {-21, 23, 3, -2, 0, -18};
	int n = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, n, sizeof(int), compare);
	for(int i = 0; i < n; i++) printf("%d ", arr[i]);
	return 0;
}
