#include <iostream>
using namespace std;

class Complex {
    int real;
    int img;

    public:
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    Complex operator-(Complex &obj) {
        Complex res;
        res.real = real - obj.real;
        res.img = img - obj.img;
        return res;
    }

    void print() {
        cout << real << " + i(" << img << ")"<< endl;
    }
};

int main() {
    Complex c1(12, 4), c2(3, 6), c3;
    c3 = c1-c2;
    c3.print();
    return 0;
}