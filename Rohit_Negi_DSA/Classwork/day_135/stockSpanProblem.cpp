#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution {
    public:
    vector<int> stockSpan(vector<int> &price, int n) {
        stack<int> stk;

        for(int i = n-1; i >= 0; i--) {

            while(!stk.empty() && price[stk.top()] < price[i]) {
                price[stk.top()] = stk.top() - i;
                stk.pop();
            }

            stk.push(i);
        }

        while(!stk.empty()) {
            price[stk.top()] = stk.top()+1;
            stk.pop();
        }

        price[0] = 1;

        return price;
    }
};

int main() {
    Solution s;
    // vector<int> v = {100, 80, 60, 70, 60, 75, 85};
    vector<int> v = {60, 70, 100};
    vector<int> res = s.stockSpan(v, v.size());
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}