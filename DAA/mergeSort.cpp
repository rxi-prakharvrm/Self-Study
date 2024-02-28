#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> &arr, int start, int mid, int end) {
    int i = start;
    int j = mid+1;
    vector<int> ans;

    while(i <= mid && j <= end) {
        if(arr[i] < arr[j]) {
            ans.push_back(arr[i]);
            i++;
        } else {
            ans.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid) {
        ans.push_back(arr[i]);
        i++;
    }

    while(j <= end) {
        ans.push_back(arr[j]);
        j++;
    }

    return ans;
}

void mergeSort(vector<int> &arr, int start, int end) {
    if(start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    vector<int> merged = merge(arr, start, mid, end);
    for(int i = start; i <= end; i++) {
        arr[i] = merged[i-start];
    }
}

int main() {
    vector<int> arr = {5, 1, 6, 2, 3, -6, 20};
    int n = arr.size();
    mergeSort(arr, 0, n-1);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}