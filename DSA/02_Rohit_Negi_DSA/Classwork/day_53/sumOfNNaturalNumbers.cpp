#include <iostream>
using namespace std;

void sumOfNNaturalNumbers(int n, int sum = 0) {
    if(n == 0) {
        cout << sum << endl;
        return;
    }
    sum += n;
    sumOfNNaturalNumbers(n-1, sum);
}

int main() {
    sumOfNNaturalNumbers(100);
    return 0;
}