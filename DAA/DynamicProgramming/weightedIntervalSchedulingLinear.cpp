#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int l = startTime.size();
        vector<vector<int>> arr(l, vector<int>(3));
        for(int i = 0; i < l; ++i) {
            arr[i][0] = startTime[i];
            arr[i][1] = endTime[i];
            arr[i][2] = profit[i];
        }
        sort(arr.begin(), arr.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
        vector<int> dp(l, -1);
        return helper(arr, l - 1, dp);
    }

private:
    int helper(vector<vector<int>>& arr, int idx, vector<int>& dp) {
        if(idx < 0) return 0;
        if(dp[idx] != -1) return dp[idx];
        // Take the current job
        int take = arr[idx][2];
        int jump = findNonConflict(arr, idx);
        if(jump != -1) take += helper(arr, jump, dp);
        // Don't take the current job
        int notTake = helper(arr, idx - 1, dp);
        return dp[idx] = max(take, notTake);
    }

    int findNonConflict(vector<vector<int>>& arr, int idx) {
        for(int i = idx - 1; i >= 0; --i) {
            if(arr[i][1] <= arr[idx][0]) return i;
        }
        return -1;
    }
};

int main() {
    Solution solution;
    vector<int> startTime = {1, 2, 3, 3};
    vector<int> endTime = {3, 4, 5, 6};
    vector<int> profit = {50, 10, 40, 70};
    int maxProfit = solution.jobScheduling(startTime, endTime, profit);
    cout << "Maximum Profit: " << maxProfit << endl;
    return 0;
}