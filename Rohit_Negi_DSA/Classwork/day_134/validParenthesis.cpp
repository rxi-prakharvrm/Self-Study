#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for(char ch : s) {
            if(ch == '(' || ch == '{' || ch == '[') {
                stk.push(ch);
            } 
            
            else if(!stk.empty()) {
                if(ch == ')' && stk.top() == '(') {
                    stk.pop();
                }
                else if(ch == '}' && stk.top() == '{') {
                    stk.pop();
                }
                else if(ch == ']' && stk.top() == '[') {
                    stk.pop();
                }
                else {
                    return false;
                }
            }

            else {
                return false;
            }
        }

        return (stk.empty()) ? true : false;
    }
};

int main() {
    string str = "{(({}))[]}";
    Solution S;
    cout << S.isValid(str) << endl;
    return 0;
}