#include <bits/stdc++.h>
using namespace std;

// O(log (n))
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

// O(n log (n))
void buildHeap(vector<int> &arr, int n) {
    for(int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i); // O(log (n))
    }
}

// O(n log (n))
void heapSort(vector<int> &arr, int n) {
    buildHeap(arr, n); // O(n log(n))

    for(int i = n - 1; i > 0; i--) { // O(n)
        swap(arr[0], arr[i]);
        heapify(arr, i, 0); // O(log (n))
    }
}

int main() {
    vector<int> arr = {5, 7, 2, 6, 1, 8, 1, 93, 5, 4, 22};
    int n = arr.size();

    heapSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
