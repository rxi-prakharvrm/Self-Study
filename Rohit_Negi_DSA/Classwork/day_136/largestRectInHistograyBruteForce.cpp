#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size(), count = 1, ans = 0;

        for(int i = 0; i < n; i++) {

            if(i != 0) {
                for(int j = i-1; j >= 0; j--) {
                    if(heights[j] >= heights[i]) {
                        count++;
                    } else {
                        break;
                    }
                }
            }

            if(i != n-1) {
                for(int k = i+1; k < n; k++) {
                    if(heights[k] >= heights[i]) {
                        count++;
                    } else {
                        break;
                    }
                }
            }

            ans = max(ans, heights[i] * count);
            count = 1;
        }

        return ans;
    }
};

int main() {
    vector<int> heights = {2, 3, 4, 2, 6, 5, 4, 5, 3};
    // vector<int> heights = {6, 5, 4, 5};
    Solution s;
    cout << s.largestRectangleArea(heights);
    return 0;
}