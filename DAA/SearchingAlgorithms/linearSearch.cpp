#include <iostream>

bool linearSearch(int *arr, int target, int n) {

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return true;
        }
    }

    return false;
}

int main() {
    int arr[] = {1, 4, 2, 7, 18, 2};    
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    std::cout << "Enter the value that you want to search: ";
    std::cin >> target;
    bool ans = linearSearch(arr, target, n);
    (ans) ? std::cout << target << " is found!" << std::endl : std::cout << target << " not found!" << std::endl;
    return 0;
}