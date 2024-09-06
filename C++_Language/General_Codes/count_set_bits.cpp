#include <iostream>
using namespace std;

int countSetBits(int num) {
    int set_bits = 0;

    while (num != 0) {
        if ((num & 1) == 1) {
            set_bits++;
        }
        num >>= 1;
    }

    return set_bits;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int set_bits = countSetBits(num);

    cout << "Number of set bits: " << set_bits << endl;

    return 0;
}
