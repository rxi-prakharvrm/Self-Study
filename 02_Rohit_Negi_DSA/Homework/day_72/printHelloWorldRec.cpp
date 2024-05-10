#include <iostream>
using namespace std;

void printMsg(int index, int n) {
    if(index > n) return;
    cout << index << ". Hello World!" << endl;
    printMsg(index + 1, n);
}

int main() {
    int index = 1, n;
    cout << "How many times you want to print the msg: ";
    cin >> n;
    printMsg(index, n);
    return 0;
}