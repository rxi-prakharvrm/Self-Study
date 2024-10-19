#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "aaAbcCABBc";
    unordered_map<char, int> mp;

    for(auto ch : str) {
        if(ch < 97) mp[ch]++;
        else {
            if(mp.find((char)(ch - 32)) != mp.end()) {
                mp.erase((char)(ch - 32));
            } else {
                mp[ch]++;
            }
        }
    }

    int ans = 0;
    for(auto it : mp) {
        if(it.first >= 97 && mp.find((char)(it.first - 32)) != mp.end()) {
            ans++;
            mp.erase(it.first);
            mp.erase((char)(it.first - 32));
        }
    }

    cout << ans << endl;

    return 0;
}