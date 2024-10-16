#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n && arr[largest] < arr[left]) {
        largest = left;
    }

    if(right < n && arr[largest] < arr[right]) {
        largest = right;
    }

    if(largest != i) {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void buildMaxHeap(vector<int> &arr, int n) {
    for(int i = n/2-1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

void heapSort(vector<int> &arr, int n) {

    buildMaxHeap(arr, n);

    for(int i = n-1; i >= 0; i--) {
        swap(arr[i], arr[0]);
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> arr = {4, 10, 3, 5, 1};
    int n = arr.size();

    heapSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}