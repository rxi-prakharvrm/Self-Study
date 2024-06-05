#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lcs(string s1, string s2, int m, int n, vector<vector<int>> &dp) {
    if (m == -1 || n == -1) return 0;

    if (dp[m][n] != -1) return dp[m][n];
    if (s1[m] == s2[n]) return dp[m][n] = 1 + lcs(s1, s2, m - 1, n - 1, dp);
    return dp[m][n] = max(lcs(s1, s2, m - 1, n, dp), lcs(s1, s2, m, n - 1, dp));
}

int main() {
    string s1 = "vibrant", s2 = "saint";
    vector<vector<int>> dp(s1.size(), vector<int>(s2.size(), -1));
    cout << lcs(s1, s2, s1.size() - 1, s2.size() - 1, dp) << endl;
    return 0;
}
