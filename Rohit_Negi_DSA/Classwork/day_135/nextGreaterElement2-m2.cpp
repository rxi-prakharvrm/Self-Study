#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr, int n){
        vector<int> ans(n, -1);
        stack<int> stk;

        // extend arr with its own copy
        for(int i = n; i < 2*n-1; i++) {
            arr.push_back(arr[i%n]);
        }
        
        for(int i = 0; i < 2*n; i++) {
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
    vector<int> arr = {6, 10, 7, 4, 8, 9, 4};
    Solution S;
    vector<int> ans = S.nextLargerElement(arr, arr.size());
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}