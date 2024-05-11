#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int n) {
    int key = 0;

    for(int i = 1; i < n; i++) {
        int j = i;

        while(j > 0 && key >= 0 && arr[j] < arr[key]) {
            swap(arr[j], arr[key]);
            j--;
            key--;
        }

        key = i;
    }
}

int main() {
    vector<int> arr = {5, -1, 2, 10, 99, 3};
    int n = arr.size();
    insertionSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}