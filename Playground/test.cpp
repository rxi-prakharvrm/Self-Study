#include <vector>
#include <algorithm>

class Solution {
public:
    int helper(int i, int target, int mul, int k, std::vector<int> numbers, std::vector<std::vector<int>> &dp) {
        if(i < 0 || target < 0) return 0;
        if(dp[i][target] != -1) return std::max(mul, dp[i][target]);
        if(target == 0 && k >= 2) return mul;
        int pick = helper(i, target - numbers[i], mul * numbers[i], k+1, numbers, dp);
        int notPick = helper(i-1, target, mul, k, numbers, dp);
        return dp[i][target] = std::max(pick, notPick);
    }

    int integerBreak(int n) {
        std::vector<int> numbers;
        std::vector<std::vector<int>> dp(n+1, std::vector<int>(n+1, -1));
        for(int i = 1; i <= n; i++) {
            numbers.push_back(i);
        }
        return helper(n-1, n, 1, 0, numbers, dp);
    }
};