#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159

class Circle {
    private:
    float r;

    public:
    Circle(float radius) {
        this->r = radius;
    }

    float areaOfCircle() {
        return PI * r * r;
    }

    float circumferenceOfCircle() {
        return 2 * PI * r;
    }
};

int main() {
    Circle *c1 = new Circle(5.2);
    cout << "Area of the circle is: " << c1->areaOfCircle() << endl;
    cout << "Circumference of the circle is: " << c1->circumferenceOfCircle();

    // deallocation of dynamic memory
    delete c1;

    return 0;
}