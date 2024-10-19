#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(mid == 0 || mid == n-1) return nums[mid];
            if(nums[mid-1] != nums[mid] && nums[mid+1] != nums[mid]) return nums[mid];

            if(nums[mid-1] == nums[mid]) {
                if(mid % 2 == 0) {
                    high = mid;
                }
                else {
                    low = mid + 1;
                }
            } else if(nums[mid+1] == nums[mid]) {
                if(mid % 2 == 0) {
                    low = mid;
                }
                else {
                    high = mid-1;
                }
            }
        }

        return -1;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    Solution S;
    int ans = S.singleNonDuplicate(nums);
    cout << ans << endl;
    return 0;
}