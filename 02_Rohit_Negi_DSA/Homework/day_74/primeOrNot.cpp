#include <iostream>
#include <math.h>
using namespace std;

bool checkPrime(int checkFor, int countDivision, int num) {
    if(checkFor > sqrt(num) && countDivision == 0) return true;
    else if(checkFor > sqrt(num) && countDivision != 0) return false;
    return checkPrime(checkFor + 1, countDivision, num);
}

int main() {
    int checkFor = 2, countDivision = 0, num;
    cout << "Enter a number: ";
    cin >> num;
    int res = checkPrime(checkFor, countDivision, num);
    if(!res) cout << num << " is a prime number" << endl;
    else cout << num << " is not a prime number" << endl;
    return 0;
}