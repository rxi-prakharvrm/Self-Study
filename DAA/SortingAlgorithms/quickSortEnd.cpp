#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end) {
    int pivot = end;
    int i = start;
    int j = end;

    while(i <= j) {
        while(j >= start && arr[j] > arr[pivot]) {
            j--;
        }
        while(i <= j && arr[i] <= arr[pivot]) {
            i++;
        }
        if(i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    swap(arr[pivot], arr[i]);
    pivot = i;

    return pivot;
}

void quickSort(vector<int> &arr, int start, int end) {
    if(start < end) {
        int index = partition(arr, start, end);
        quickSort(arr, start, index - 1);
        quickSort(arr, index + 1, end);
    }
}

int main() {
    vector<int> arr = {5, -1, 2, 10, 99, 3, 67, -98};
    int n = arr.size();
    quickSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}