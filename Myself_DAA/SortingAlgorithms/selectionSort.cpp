#include <bits/stdc++.h>
using namespace std;

// ============= alternate way ================
// void selectionSort(vector<int> &arr, int n) {
//     for(int i = 0; i < n-1; i++) {
//         for(int j = i+1; j < n; j++) {
//             if(arr[i] > arr[j]) {
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }
// }

void selectionSort(vector<int> &arr, int n) {
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    vector<int> arr = {5, 2, 8, 1, 0, 10, -1, 100};
    int n = arr.size();
    selectionSort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
