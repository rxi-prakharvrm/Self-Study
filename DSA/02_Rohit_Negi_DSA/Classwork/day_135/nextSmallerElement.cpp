#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<long long> nextSmallerElement(vector<long long> &arr, int n){
        vector<long long> ans(n, -1);
        stack<long long> stk;
        
        for(int i = 0; i < n; i++) {
            while(!stk.empty() && arr[i] < arr[stk.top()]) {
                ans[stk.top()] = arr[i];
                stk.pop();
            }
            stk.push(i);
        }
        
        return ans;
    }
};

int main() {
    vector<long long> arr = {2, 3, 4, 2, 6, 5, 4, 5, 3};
    // vector<long long> arr = {7, 9, 12, 10, 14, 8, 3, 6, 9};
    Solution S;
    vector<long long> ans = S.nextSmallerElement(arr, arr.size());
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}