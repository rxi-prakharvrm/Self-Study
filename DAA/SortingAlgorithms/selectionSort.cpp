#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
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


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> arr = {5, 2, 8, 23, -5, 6, -17};
    
//     for(int i = 0; i < arr.size()-1; i++) {
//         int mn = i;
//         for(int j = i+1; j < arr.size(); j++) {
//             if(arr[j] < arr[mn]) mn = j;
//         }
//         swap(arr[i], arr[mn]);
//     }
    
//     for(int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }