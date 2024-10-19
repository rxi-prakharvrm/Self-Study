#include <bits/stdc++.h>
using namespace std;

class Complex {
    private:
    int a, b;

    public:
    Complex(int a, int b) {
        this->a = a;
        this->b = b;
    }

    Complex operator+(const Complex &that) {
        return Complex(this->a + that.a, this->b + that.b);
    }

    friend ostream& operator<<(ostream &out, const Complex &c);

    void display() {
        cout << "Complex number is: " << a << " + i" << b << endl;
    }
};

ostream& operator<<(ostream &out, const Complex &c) {
    out << c.a << " + i" << c.b;
    return out;
}

int main() {
    Complex x(3, 10);
    Complex y(2, 5);
    Complex sum = x + y;
    cout << "Sum of two complex numbers x and y is: " << sum << endl;
    return 0;
}
