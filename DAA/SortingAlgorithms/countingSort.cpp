#include <bits/stdc++.h>
using namespace std;

int getMax(vector<int> &arr, int n) {
    int mx = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > mx) mx = arr[i];
    }
    return mx+1;
}

vector<int> countingSort(vector<int> &arr, int range, int n) {
    
    vector<int> freqArray(range, 0);
    vector<int> cummulativeArray(range, 0);
    vector<int> outputArray(n);

    // Count frequency
    for(int i = 0; i < n; i++) {
        freqArray[arr[i]]++;
    }

    // Calculate cummulative frequency
    cummulativeArray[0] = freqArray[0];
    for(int i = 1; i < range; i++) {
        cummulativeArray[i] = cummulativeArray[i-1] + freqArray[i];
    }

    // form output array
    for(int i = n-1; i >= 0; i--) {
        outputArray[cummulativeArray[arr[i]]-1] = arr[i];
        cummulativeArray[arr[i]]--;
    }

    return outputArray;
}

int main() {
    vector<int> arr = {2, 5, 3, 0, 2, 3, 0, 3};
    int n = arr.size();
    int range = getMax(arr, n);
    vector<int> output = countingSort(arr, range, n);
    
    for(int i = 0; i < n; i++) {
        cout << output[i] << " ";
    }
    
    return 0;
}