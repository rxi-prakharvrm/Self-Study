#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n) {
    for(int i = n-1; i >= 0; i--) {
        for(int j = n-i; j < n; j++) {
            if(arr[n-i-1] > arr[j]) {
                swap(arr[n-i-1], arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {5, -1, 2, 10, 99, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}