#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s1, string s2) {
        stack<char> stk1, stk2;

        // check for backspace and push the string s1 to stack stk1
        for(char ch : s1) {
            if(ch == '#' && stk1.empty()) {
                continue;
            }

            if(ch == '#') {
                stk1.pop();
            } else {
                stk1.push(ch);
            }
        }

        // check for backspace and push the string s2 to stack stk2
        for(char ch : s2) {
            if(ch == '#' && stk2.empty()) {
                continue;
            }

            if(ch == '#') {
                stk2.pop();
            } else {
                stk2.push(ch);
            }
        }

        // return true if both the stacks are identical
        return stk1 == stk2;
    }
};

int main() {
    string s1 = "a##c";
    string s2 = "#a#c";
    Solution S;
    cout << S.backspaceCompare(s1, s2) << endl;
    return 0;
}