#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSort(vector<int> &arr, int n, int start, int end) {
    if(start == end) return arr;

    int mid = start + (end - start) / 2;
    vector<int> left = mergeSort(arr, n, start, mid);
    vector<int> right = mergeSort(arr, n, mid + 1, end);
}



int main() {    
    vector<int> arr = {5, 2, 17, -3, 4, 8, 23};
    int n = arr.size();
    mergeSort(arr, n, 0, n-1);
    
    return 0;
}