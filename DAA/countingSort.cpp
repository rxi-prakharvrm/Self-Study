#include <bits/stdc++.h>
using namespace std;

int getMax(vector<int> arr, int n) {
    int mx = arr[0];

    for(int i = 0; i < n; i++) {
        mx = max(mx, arr[i]);
    }

    return mx;
}

vector<int> countingSort(vector<int> &arr, int range, int n) {
    vector<int> freq(range, 0);
    vector<int> cummulativeSum(range, 0);
    vector<int> output(n, -1);

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    cummulativeSum[0] = freq[0];
    for(int i = 1; i < range; i++) {
        cummulativeSum[i] = cummulativeSum[i-1] + freq[i];
    }

    for(int i = n-1; i >= 0; i--) {
        output[cummulativeSum[arr[i]]-1] = arr[i];
        cummulativeSum[arr[i]]--;
    }

    return output;
}

int main() {
    // bucket sort is only applicable on fixed range of numbers in an array
    // here the range is 0-9
    // vector<int> arr = {3, 2, 1, 1, 8, 2, 3, 0, 9};
    vector<int> arr = {3, 0, 0, 1, 2, 3};
    int range = getMax(arr, arr.size()) + 1;
    int n = arr.size();

    vector<int> output = countingSort(arr, range, n);

    for(int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    return 0;
}