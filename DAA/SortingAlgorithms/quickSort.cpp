#include <bits/stdc++.h>
using namespace std;

int placePivot(vector<int> &arr, int start, int end) {
    int pivot = start;
    int i = start + 1;
    int j = end;
    
    while (i <= j) {
        while (i <= end && arr[i] <= arr[pivot]) {
            i++;
        }
        
        while (j >= start && arr[j] > arr[pivot]) {
            j--;
        }
        
        if (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    
    // Swap the pivot element to its correct position
    swap(arr[j], arr[pivot]);
    return j;
}

void quickSort(vector<int> &arr, int start, int end) {
    if (start >= end) return;
    int pivotIndex = placePivot(arr, start, end);
    quickSort(arr, start, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, end);
}

int main() {
    vector<int> arr = {5, 2, 8, 1, 0, 10, -1, 100};
    int n = arr.size();
    quickSort(arr, 0, n - 1);
    
    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
