#include <iostream>
using namespace std;

void table(int index, int num) {
    if(index > 10) return;
    cout << num << " * " << index << " = " << num*index << endl;
    table(index + 1, num);
}

int main() {
    int index = 1, num;
    cout << "Enter the number for which you want table: ";
    cin >> num;
    table(index, num);
    return 0;
}