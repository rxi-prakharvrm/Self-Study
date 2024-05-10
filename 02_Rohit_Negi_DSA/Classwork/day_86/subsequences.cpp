#include <bits/stdc++.h>
using namespace std;

void subsequence(vector<int> arr, int index, int n, vector<vector<int>> &ans, vector<int> temp) {
    // Termination condition
    if(index == n) {
        ans.push_back(temp);
        return;
    }

    // Not Included 
    subsequence(arr, index+1, n, ans, temp);

    // Included
    temp.push_back(arr[index]);
    subsequence(arr, index+1, n, ans, temp);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;
    subsequence(arr, 0, arr.size(), ans, temp);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}