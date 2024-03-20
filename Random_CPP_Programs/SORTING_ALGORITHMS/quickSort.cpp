#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int i, int j, int n) {
    int pivot = i;

    while(i <= j) {
        while(arr[i] <= arr[pivot] && i <= j) {
            i++;
        }
        while(arr[j] >= arr[pivot] && i <= j) {
            j--;
        }
        if(i <= j) {
            swap(arr[i], arr[j]);
            partition(arr, ++i, --j, n);
        }
    }

    swap(arr[j], arr[pivot]);
    return j;
}

void quickSort(vector<int> &arr, int start, int end) {
    if(start < end) {
        int index = partition(arr, start, end, arr.size());
        quickSort(arr, start, index - 1);
        quickSort(arr, index + 1, end);
    }
}

int main() {
    vector<int> arr = {5, 2, 17, -3, 4, 8, 23};
    int n = arr.size();
    quickSort(arr, 0, n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}