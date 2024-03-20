#include <bits/stdc++.h>
using namespace std;

int getMax(vector<int> arr, int n) {
    int mx = arr[0];
    for(int i = 1; i < n; i++) {
        mx = max(mx, arr[i]);
    }
    return mx;
}

void countingSort(vector<int> &arr, int range, int n) {
    vector<int> freq(range, 0);
    vector<int> cummulativeSum(range, 0);
    vector<int> ans(n, -1);

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cummulativeSum[0] = freq[0];
    for(int i = 1; i < range; i++) {
        cummulativeSum[i] = cummulativeSum[i-1] + freq[i];
    }

    for(int i = n-1; i >= 0; i--) {
        ans[cummulativeSum[arr[i]]-1] = arr[i];
        cummulativeSum[arr[i]]--;
    }

    for(int i = 0; i < n; i++) {
        arr[i] = ans[i];
    }
}

int main() {
    vector<int> arr = {2, 3, 3, 0, 1, 4, 5};
    int n = arr.size();
    int r = getMax(arr, n) + 1;
    countingSort(arr, r, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}