#include <bits/stdc++.h>
using namespace std;

vector<string> beautify(vector<string> &arr) {
    stack<string> stk;

    for(int i = 0; i < arr.size(); i++) {
        if(stk.empty()) {
            stk.push(arr[i]);
        }
        
        else if(stk.top() == arr[i]) {
            stk.pop();
        } 
        
        else {
            stk.push(arr[i]);
        }
    }

    vector<string> ans(stk.size());

    for(int i = stk.size()-1; i >= 0; i--) {
        ans[i] = stk.top();
        stk.pop();
    }

    return ans;
}

int main() {
    vector<string> arr = {"ab", "ac", "da", "da", "ac", "db", "ea"};
    vector<string> ans = beautify(arr);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}