#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end) {
    int mid = start + (end - start) / 2; // Calculate middle index
    int pivot = arr[mid]; // Choose middle element as pivot
    int i = start;
    int j = end;

    while (i <= j) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return i;
}

void quickSort(vector<int> &arr, int start, int end) {
    if (start < end) {
        int index = partition(arr, start, end);
        quickSort(arr, start, index - 1);
        quickSort(arr, index, end); // Modify to exclude the pivot from the next partition
    }
}

int main() {
    vector<int> arr = {5, -1, 2, 10, 99, 3, 67, -98};
    int n = arr.size();
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
