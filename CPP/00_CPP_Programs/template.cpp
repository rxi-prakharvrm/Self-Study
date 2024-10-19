#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T* arr, int n);

// Implement main and methods here
template <typename T>
void bubbleSort(T* arr, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i; j < n-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
        n--;
    }
}

int main() {
    int arr[] = {5, 2, 3, 42, 7, 13};
    // string arr[] = {"C", "C++", "JavaScript"};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort<int>(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}