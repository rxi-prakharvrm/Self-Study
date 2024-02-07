#include <bits/stdc++.h>
using namespace std;

vector<int> getMinAndPop(stack<int> stk) {
    vector<int> ans;
    stack<int> helperStk;
    int mn = INT_MAX;
    
    while(!stk.empty()) {
        while(!stk.empty()) {
            mn = min(mn, stk.top());
            helperStk.push(stk.top());
            stk.pop();
        }

        ans.push_back(mn);

        while(!helperStk.empty()) {
            stk.push(helperStk.top());
            helperStk.pop();
        }

        stk.pop();
        mn = INT_MAX;
    }

    return ans;
}

int main() {
    stack<int> stk;

    // push
    stk.push(2);
    stk.push(1);
    stk.push(3);
    stk.push(5);
    stk.push(0);
    stk.push(6);

    vector<int> ans = getMinAndPop(stk);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}