#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> arr) {
    int n = arr.size();
    bool isChanged = false;
    
    for(int i = 0; i < n; i++) {
        int j = 0;
        
        while(j < n-1) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isChanged = true;
            }
            j++;
        }

        // if no movement happens after first iteration
        if(isChanged == false) return arr;

        n--;
    }
    
    return arr;
}

int main() {
    vector<int> arr = {5, 2, 7, 1, 6, 8};
    // vector<int> arr = {1, 2, 3, 4, 5, 6};
    vector<int> sortedArray = bubbleSort(arr);
    for(int i = 0; i < sortedArray.size(); i++) {
        cout << sortedArray[i] << " ";
    }
    return 0;
}

// void bubbleSort(int *arr, int n) {
//     for(int i = n-1; i >= 0; i--) {
//         for(int j = n-i; j < n; j++) {
//             if(arr[n-i-1] > arr[j]) {
//                 swap(arr[n-i-1], arr[j]);
//             }
//         }
//     }
// }

// int main() {
//     int arr[] = {5, -1, 2, 10, 99, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     bubbleSort(arr, n);
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
