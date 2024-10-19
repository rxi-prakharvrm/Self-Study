#include <bits/stdc++.h>
using namespace std;

class Solution{
public:    

    vector<int> bracketNumbers(string S)
    {
        stack<int> stk;
        vector<int> ans;
        int count = 0;
        
        for(int i = 0; i < S.size(); i++) {
            if(S[i] == '(') {
                count++;
                stk.push(count);
                ans.push_back(count);
            }
            else if(S[i] == ')') {
                ans.push_back(stk.top());
                stk.pop();
            }
        }
        
        return ans;
    }
};

int main() {
  string str = "(((()(";
  Solution S;
  vector<int> ans = S.bracketNumbers(str);
  for(int i : ans) {
    cout << i << " ";
  }
}