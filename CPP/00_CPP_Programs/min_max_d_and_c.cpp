#include <bits/stdc++.h>
using namespace std;

void minMax(vector<int> arr, int i, int j, int &mn, int &mx) {
    if(i == j) {
        mn = mx = arr[i];
    }

    else if(i == j-1) {
        if(arr[i] < arr[j]) {
            mn = min(mn, arr[i]);
            mx = max(mx, arr[j]);
        }

        else {
            mn = min(mn, arr[j]);
            mx = max(mx, arr[i]);
        }
    }

    else {
        int mid = (i + j) / 2;

        minMax(arr, i, mid, mn, mx);
        minMax(arr, mid + 1, j, mn, mx);
    }

}

int main() {
    vector<int> arr = {6, 3, 4, 11, 16, 2, 15, 7};
    int mn = INT_MAX, mx = INT_MIN;
    minMax(arr, 0, arr.size()-1, mn, mx);
    cout << "Min = " << mn << endl;
    cout << "Max = " << mx << endl;
    return 0;
}