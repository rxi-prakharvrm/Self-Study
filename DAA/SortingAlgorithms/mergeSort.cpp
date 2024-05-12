#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end) {
    int i = start;
    int j = mid + 1;
    vector<int> temp;

    while(i <= mid && j <= end) {
        if(arr[i] < arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }

        else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // add the remaining element of array[i] to temp
    while(i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // add the remaining element of array[j] to temp
    while(j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // assign the temp value in the original array
    for(int i = start; i <= end; i++) {
        arr[i] = temp[i-start];
    }
}

void mergeSort(vector<int> &arr, int start, int end) {
    if(start < end) {
        int mid = start + (end - start) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}

int main() {    
    vector<int> arr = {5, 2, 17, -3, 4, 8, 23};
    int n = arr.size();
    mergeSort(arr, 0, n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
