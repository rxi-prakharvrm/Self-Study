#include <bits/stdc++.h>
using namespace std;

int peakIndex(vector<int> arr, int n) {
    int start = 1, end = n-2;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) return mid;
        else if(arr[mid] > arr[mid - 1]) start = mid + 1;
        else if(arr[mid] > arr[mid + 1]) end = mid - 1;
    }

    return -1;
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 8, 5};
    // vector<int> arr = {1, 6, 3, 2, 1};
    // vector<int> arr = {1, 2, 3, 6, 1};
    int ans = peakIndex(arr, arr.size());
    cout << ans << endl;
    return 0;
}