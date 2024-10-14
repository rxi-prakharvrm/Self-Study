#include <stdio.h>

int main() {
    int arr[] = {18, 2, 44, 23, 37};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minNumber = arr[0];
    int maxNumber = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < minNumber) {
            minNumber = arr[i];
        }
        if(arr[i] > maxNumber) {
            maxNumber = arr[i];
        }
    }

    printf("Minimum number in the given array is: %d\n", minNumber);
    printf("Maximum number in the given array is: %d\n", maxNumber);

    return 0;
}