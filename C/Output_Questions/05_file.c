#include <stdio.h>

void func(int *arr, int n) {
    arr[n - 1] = n * arr[n - 1];
}

int main() {
    int arr[] = {1, 2, 3, 4};
    func(arr, 4);
    printf("%d", arr[3]);
    return 0;
}