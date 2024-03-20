#include <bits/stdc++.h>
using namespace std;

/* Iterative Approach */

// void insertionSort(vector<int> &arr, int n) {
//     for(int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j;
//         for(j = i-1; j >= 0 && key < arr[j]; j--) {
//             arr[j+1] = arr[j];
//         }
//         arr[j+1] = key;
//     }
// }

// int main() {
//     vector<int> arr = {5, 2, 7, -3, 4, 8, 23};
//     int n = arr.size();
//     insertionSort(arr, n);

//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
//     return 0;
// }

/* Recursive Approach */

void insertionSort(vector<int> &arr, int n, int &i) {
    if(i == n) return;

    int key = arr[i];
    int j = i-1;
    for(j; j >= 0 && key < arr[j]; j--) {
        arr[j+1] = arr[j];
    }
    arr[j+1] = key;
    i++;
    insertionSort(arr, n, i);
}

int main() {
    vector<int> arr = {5, 2, 7, -3, 4, 8, 23};
    int n = arr.size();
    int i = 1;
    insertionSort(arr, n, i);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}