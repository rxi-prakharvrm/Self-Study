#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &stk, int x) {
    stack<int> stkHelper;
    while(!stk.empty()) {
        stkHelper.push(stk.top());
        stk.pop();
    }
    stk.push(x);
    while(!stkHelper.empty()) {
        stk.push(stkHelper.top());
        stkHelper.pop();
    }
}

int main() {
    int x = 2;
    stack<int> stk;

    // push elements into stack
    stk.push(4);
    stk.push(3);
    stk.push(2);
    stk.push(1);
    stk.push(8);

    insertAtBottom(stk, x);

    // print stack
    while(!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }

    return 0;
}