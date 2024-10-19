#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {        
        stack<char> stk;
        int count = 0;

        for(char ch : s) {
            if(ch == '(') {
                stk.push(ch);
            }
            else {
                if(!stk.empty()) {
                    stk.pop();
                }
                else {
                    count++;
                }
            }
        }
        
        while(!stk.empty()) {
            count++;
            stk.pop();
        }

        return count;
    }
};

int main() {
    string str = "(()))((";
    Solution s;
    cout << s.minAddToMakeValid(str) << endl; // 3
    return 0;
}