#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool minAddToMakeValid(string s) {
        int count = 0;

        for(char ch : s) {
            if(ch == '(') {
                count++;
            }
            else {
                if(count != 0) {
                    count--;
                }
                else {
                    return false;
                }
            }
        }

        return (count == 0) ? true : false;
    }
};

int main() {
    string str = "(()())";
    Solution s;
    cout << s.minAddToMakeValid(str) << endl; // 3
    return 0;
}