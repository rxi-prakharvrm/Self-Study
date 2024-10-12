#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end) {
    vector<int> temp;
    int i = start, j = mid + 1;

    // Merge two sorted subarrays
    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // If there are leftover elements in the first half
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // If there are leftover elements in the second half
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy the sorted subarray back into the original array
    for (int k = 0; k < temp.size(); k++) {
        arr[start + k] = temp[k];
    }
}

void mergeSort(vector<int> &arr, int start, int end) {
    if (start >= end) return;
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main() {
    vector<int> arr = {5, 2, 8, 1, 0, 10, -1, 100};
    int n = arr.size();
    mergeSort(arr, 0, n - 1);
    
    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
