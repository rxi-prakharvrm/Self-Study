#include <iostream>
using namespace std;

int main() {
    try{
        int a, b;
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;

        if(b == 0) {
            throw 0;
        }
        else {
            cout << "The value of a/b is: " << a/b;
        }
    }
    catch(int e) {
        cout << "Division by zero is not allowed. Please enter a non-zero value for b.";
        cout << "Error code: " << e;
    }
    return 0;
}
