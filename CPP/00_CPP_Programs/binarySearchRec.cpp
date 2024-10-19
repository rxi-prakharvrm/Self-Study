#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target, int start, int end) {

    if(start > end) return -1;
        
    int mid = start + (end - start) / 2;

    if(arr[mid] == target) {
        return arr[mid];
    }

    else if(arr[mid] > target) {
        return binarySearch(arr, target, start, mid - 1);
    }

    else {
        return binarySearch(arr, target, mid + 1, end);
    }
}

int main() {
    int target = 10;
    vector<int> arr = {1, 2, 3, 4, 11, 56};
    cout << binarySearch(arr, target, 0, arr.size()-1);
    return 0;
}