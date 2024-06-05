#include <bits/stdc++.h>
using namespace std;

int numOfWaysToSum(int n, vector<int> &dp) {
    if(n < 0) return 0;
    if(n == 0 || n == 1 || n == 2) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = numOfWaysToSum(n-1, dp) + numOfWaysToSum(n-3, dp) + numOfWaysToSum(n-4, dp);
}

int main() {
    int n = 5;
    vector<int> dp(n+1, -1);
    cout << numOfWaysToSum(n, dp) << endl;
    return 0;
}