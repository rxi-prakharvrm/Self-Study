#include <bits/stdc++.h>
using namespace std;

int getMax(vector<int> arr, int n)
{
	int mx = arr[0];

	for (int i = 1; i < n; i++)
		if (arr[i] > mx)
			mx = arr[i];

	return mx;
}

int getLength(int mx) {
    int count = 0;

    while(mx > 0) {
        count++;
        mx /= 10;
    }

    return count;
}

void radixsort(vector<int> &arr, int n, vector<vector<int>> &ans) {
    int mx = getMax(arr, n);
    int mxLength = getLength(mx);

    int exp = 1;

    for(int i = 1; i <= mxLength; i++) {

        for(int j = 0; j < n; j++) {
            ans[(arr[j] / exp) % 10].push_back(arr[j]);
        }

        arr.clear();

        for(int j = 0; j < 10; j++) {

            for(int k = 0; k < ans[j].size(); k++) {
                arr.push_back(ans[j][k]);
            }

            ans[j].clear();
        }

        exp *= 10;
    }
}

int main()
{
	vector<int> arr = {803, 127, 45, 75, 144, 49, 18, 2, 7};
	int n = arr.size();
    vector<vector<int>> ans(10);

	// Function Call
	radixsort(arr, n, ans);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

	return 0;
}
