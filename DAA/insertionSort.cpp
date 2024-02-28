#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int n) {
    for(int i = 1; i < n; i++) {
        int j = i;
        while(arr[j] < arr[j-1] && j > 0) {
            swap(arr[j], arr[j-1]);
            j--;
        }
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