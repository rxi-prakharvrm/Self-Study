#include <iostream>
using namespace std;

// int sumOfCubes(int num) {
//     if(num == 0) return 0;
//     return (num*num*num) + sumOfCubes(num - 1);
// }

// int main() {
//     int num;
//     cout << "Enter the number till you want the sum of cube: ";
//     cin >> num;
//     int res = sumOfCubes(num);
//     cout << "Sum of cubes of " << num << " natural numbers is: " << res << endl;
//     return 0;
// }

void sumOfCubes(int num, int res) {
    if(num == 0) cout << res << endl;
    res += (num*num*num);    
    sumOfCubes(num - 1, res);
}

int main() {
    int num, res = 0;
    cout << "Enter the number till you want the sum of cube: ";
    cin >> num;
    sumOfCubes(num, res);
    return 0;
}