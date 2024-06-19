#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    private:
    float length;
    float width;

    public:
    Rectangle(float length, float width) {
        this->length = length;
        this->width = width;
    }

    float area() {
        return length * width;
    }

    float parimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle R1(4.0, 7.2);
    cout << "The area of the rectangle R1 is: " << R1.area() << endl;
    cout << "The parimeter of the rectangle R1 is: " << R1.parimeter() << endl;
    return 0;
}