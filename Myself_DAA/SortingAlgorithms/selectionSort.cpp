#include <bits/stdc++.h>
using namespace std;

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
    for(int i=0; i<n; i++){
        int min=arr[i];
        int minIdx=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<min){
                minIdx=j;
                min=arr[j];
            }
        }
        swap(arr[i],arr[minIdx]);
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