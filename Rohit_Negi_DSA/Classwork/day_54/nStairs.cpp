/* This problem can also be solve using -

        DYNAMIC PROGRAMMING (DP)

*/

#include <iostream>
using namespace std;

// int nStairs(int n) {
//     if(n == 0 || n == 1) {
//         return 1;
//     }

//     return nStairs(n-1) + nStairs(n-2);
// }

// int main() {
//     int noOfStairs = 4;
//     cout << nStairs(noOfStairs);
//     return 0;
// }

int main() {
    int n = 6, a = 1, b = 1, totalWays = 0, temp;
    for(int i = 2; i <= n; i++) {
        totalWays = a + b;
        a = b;
        b = totalWays;
    }
    cout << "Total ways to react at the top: " << totalWays << endl;
    return 0;
}