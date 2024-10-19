#include <stdio.h>

int binarySearch(int *arr, int start, int end, int target) {
    while(start < end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target)
            return mid;
        else if(arr[mid] > target)
            end = mid - 1;
        else 
            start = mid + 1;
    }

    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    int result = binarySearch(arr, 0, size - 1, target);

    if (result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at index %d", result);

    return 0;
}