#include <bits/stdc++.h>
using namespace std;

int getMaxNumber(vector<int> &arr, int n) {
    int mx = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > mx) mx = arr[i];
    }
    return mx;
}

int getMaxDigits(vector<int> &arr, int n) {
    int mxNumber = getMaxNumber(arr, n);
    int count = 0;
    while(mxNumber) {
        mxNumber /= 10;
        count++;
    }
    return count;
}

void radixSort(vector<int> &arr, vector<vector<int>> &temp, int n, int mxDigits) {
    int div = 1;

    while(mxDigits) {
        for(int i = 0; i < n; i++) {
            temp[(arr[i]/div)%10].push_back(arr[i]);
        }

        int idx = 0;
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < temp[i].size(); j++) {
                arr[idx] = temp[i][j];
                idx++;
            }
        }
        
        // Clear the temporary vectors for the next iteration
        for (int i = 0; i < 10; i++) {
            temp[i].clear();
        }
        div *= 10;
        mxDigits--;
    }
}

int main() {
	vector<int> arr = {803, 127, 45, 75, 144, 49, 18, 2, 7};
	int n = arr.size();
    int mxDigits = getMaxDigits(arr, n);
    vector<vector<int>> temp(10);
    radixSort(arr, temp, n, mxDigits);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
	return 0;
}
