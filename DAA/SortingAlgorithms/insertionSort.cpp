#include <iostream>
#include <vector>
using namespace std;

// ========= another method ===============
// void insertionSort(vector<int> &arr, int n) {
//     int key = 0;

//     for(int i = 1; i < n; i++) {
//         int j = i;

//         while(j > 0 && key >= 0 && arr[j] < arr[key]) {
//             swap(arr[j], arr[key]);
//             j--;
//             key--;
//         }

//         key = i;
//     }
// }

void insertionSort(vector<int> &arr, int n) {
    for(int i = 1; i < n; i++) {
        int j = i-1;
        while(j >= 0 && arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
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
