#include <bits/stdc++.h>
using namespace std;

<<<<<<< HEAD
=======
// ============= alternate way ================
>>>>>>> f2fab54a1113b908bf24fdf5d2f18003b54f2ed8
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
<<<<<<< HEAD
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
=======
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
>>>>>>> f2fab54a1113b908bf24fdf5d2f18003b54f2ed8
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
