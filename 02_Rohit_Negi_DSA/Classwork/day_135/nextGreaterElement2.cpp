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

        for(int i = 0; i < n; i++) {
            if(ans[i] == -1) {
                for(int j = 0; j < i; j++) {
                    if(arr[j] > arr[i]) {
                        ans[i] = arr[j];
                        break;
                    }
                }
            }
        }
        
        return ans;
    }
};

int main() {
    vector<long long> arr = {6, 10, 7, 4, 8, 9, 4};
    Solution S;
    vector<long long> ans = S.nextLargerElement(arr, arr.size());
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}