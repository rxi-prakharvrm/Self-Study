#include <iostream>
using namespace std;

// int sos(int n) {
//     if(n == 1) {
//         return n;
//     }
//     return sos(n-1) + n*n;
// }

// int main() {
//     cout << sos(5);
//     return 0;
// }

void sos(int n, int ans = 0) {
    if(n == 0) {
        cout << ans << endl;
        return;
    }
    ans += n*n;
    sos(n-1, ans);
}

int main() {
    sos(5);
    return 0;
}