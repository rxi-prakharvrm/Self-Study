#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter you full name: ";
    getline(cin, name);
    cout << "Hello, " << name << endl;
    return 0;
}