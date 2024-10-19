#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5, 7, 2, 8, -1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0;

    for(int i = 1; i < n; i++) {
        int item = arr[i];

        for(j = i-1; j >= 0 && arr[j] > item; j--) {
            arr[j+1] = arr[j];
        }

        arr[j+1] = item;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}