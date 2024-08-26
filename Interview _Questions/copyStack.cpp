#include <bits/stdc++.h>
using namespace std;

void copyStack(stack<int> &s1, stack<int> &s2, int n) {
    if(s1.empty()) {
        return;
    }
    int top = s1.top();
    s1.pop();
    copyStack(s1, s2, n);
    s2.push(top);
}

int main() {
    stack<int> s1;
    int n = 5;

    for(int i = 0; i < n; i++) {
        s1.push(i+1);
    }

    stack<int> s2;
    copyStack(s1, s2, n);

    while(!s2.empty()) {
        cout << s2.top() << endl;
        s2.pop();
    }

    return 0;
}