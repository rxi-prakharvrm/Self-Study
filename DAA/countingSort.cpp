#include <bits/stdc++.h>
using namespace std;

void bucketSort(vector<int> &arr, int range, int n) {
    vector<int> freq(range+1, 0);

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int j = 0;
    for(int i = 0; i <= range; i++) {
        while(freq[i] > 0) {
            arr[j] = i;
            j++;
            freq[i]--;
        }
    }
}

int main() {
    // bucket sort is only applicable on fixed range of numbers in an array
    // here the range is 0-9
    // vector<int> arr = {3, 2, 1, 1, 8, 2, 3, 0};
    vector<int> arr = {0, 2, 2, 10, 8, 10, 5, 2, 3, 7, 6, 4};
    int range = 10;
    int n = arr.size();
    bucketSort(arr, range, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}