#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<long long> nextSmallerElement(vector<long long> &arr, int n){
        vector<long long> ans(n, -1);
        stack<long long> stk;
        
        for(int i = n-1; i >= 0; i--) {
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
    vector<long long> arr = {4, 13, 11, 5, 9, 7, 8, 6};
    Solution S;
    vector<long long> ans = S.nextSmallerElement(arr, arr.size());
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}