#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str) {
    stack<char> stk;
    for(char ch : str) {
        stk.push(ch);
    }
    str = "";
    while(!stk.empty()) {
        str.push_back(stk.top());
        stk.pop();
    }
}

int main() {
    string s = "stack";
    reverseString(s);
    cout << "Reverse string is: " << s << endl;
    return 0;
}