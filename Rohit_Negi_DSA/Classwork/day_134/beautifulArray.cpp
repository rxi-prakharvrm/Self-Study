#include <bits/stdc++.h>
using namespace std;

vector<int> beautify(vector<int> &arr) {
    stack<int> stk;

    for(int i = 0; i < arr.size(); i++) {
        if(stk.empty()) {
            stk.push(arr[i]);
        }
        
        else if((stk.top() >= 0 && arr[i] < 0) || (stk.top() < 0 && arr[i] >= 0)) {
            stk.push(arr[i]);
            stk.pop();
            stk.pop();
        } 
        
        else {
            stk.push(arr[i]);
        }
    }

    vector<int> ans(stk.size());

    for(int i = stk.size()-1; i >= 0; i--) {
        ans[i] = stk.top();
        stk.pop();
    }

    return ans;
}

int main() {
    vector<int> arr = {6, -19, -9, 4, -7, 10, -5};
    vector<int> ans = beautify(arr);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}