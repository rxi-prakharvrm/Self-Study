#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "BANANA";
    string s2 = "NAANAAXNABABXNNBZ";

    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;

    for(auto ch : s1) {
        mp1[ch]++;
    }

    for(auto ch : s2) {
        if(mp1.find(ch) != mp1.end()) {
            mp2[ch]++;
        }
    }

    int ans = INT_MAX;
    for(auto ch : s1) {
        ans = min(ans, (mp2[ch] / mp1[ch]));
    }

    cout << "Total occurences of s1 in s2 are: " << ans << endl;

    return 0;
}