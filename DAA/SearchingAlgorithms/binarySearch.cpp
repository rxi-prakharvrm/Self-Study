#include <iostream>

bool binarySearch(int *arr, int target, int n) {
    int lower = 0, upper = n-1;

    while(lower <= upper) {
        int mid = lower + (upper - lower) / 2;
        if(arr[mid] == target) return true;
        else if(arr[mid] > target) upper = mid-1;
        else lower = mid+1;
    }

    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};    
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    std::cout << "Enter the value that you want to search: ";
    std::cin >> target;
    bool ans = binarySearch(arr, target, n);
    (ans) ? std::cout << target << " is found!" << std::endl : std::cout << target << " not found!" << std::endl;
    return 0;
}