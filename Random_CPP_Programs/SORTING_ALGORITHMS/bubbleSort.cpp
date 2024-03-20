#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int n) {
    for(int i = n-1; i >= 0; i--) {
        for(int j = 1; j < i; j++) {
            if(arr[j-1] > arr[j]) {
                swap(arr[j-1], arr[j]);
            }
        }
    }
}

int main() {
    vector<int> arr = {5, 2, 17, -3, 4, 8, 23};
    int n = arr.size();
    bubbleSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}