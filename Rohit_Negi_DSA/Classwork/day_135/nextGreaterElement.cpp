#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        vector<long long> ans(n, -1);
        stack<long long> stk;
        
        for(int i = 0; i < n; i++) {
            if(!stk.empty()) {
                while(!stk.empty() && arr[i] > arr[stk.top()]) {
                    ans[stk.top()] = arr[i];
                    stk.pop();
                }
            }
            stk.push(i);
        }
        
        return ans;
    }
};

int main() {
    vector<long long> arr = {8, 6, 4, 7, 4, 9, 10, 8, 12};
    Solution S;
    vector<long long> ans = S.nextLargerElement(arr, arr.size());
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}