#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target) {
    int start = 0, end = arr.size() - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == target) {
            return arr[mid];
        }

        else if(arr[mid] > target) {
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }
    }

    return -1;
}

int main() {
    int target = 10;
    vector<int> arr = {1, 2, 3, 4, 100, 56};
    cout << binarySearch(arr, target);
    return 0;
}