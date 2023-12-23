#include <bits/stdc++.h>
using namespace std;

int subsequences(int index, vector<int> &nums, int sum) {
    if(sum == 0) return 1;
    if(index == nums.size() || sum < 0) {
        return 0;
    }
    return subsequences(index + 1, nums, sum) + subsequences(index + 1, nums,  sum - nums[index]);
}

int main() {
    int index = 0, sum = 8;
    vector<int> nums = {2, 5, 6, 1};
    vector<vector<int>> ans;
    int res = subsequences(index, nums, sum);
    cout << res << endl;
    return 0;
}