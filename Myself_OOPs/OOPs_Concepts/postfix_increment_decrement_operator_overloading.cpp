#include <iostream>
using namespace std;

class Marks {
    int marks;

    public:
    Marks(int m = 0) {
        marks = m;
    }

    Marks operator++(int) {
        Marks duplicate(*this);
        marks += 1;
        return duplicate;
    }

    friend Marks operator--(Marks &, int);

    void yourMarksPlease() {
        cout << "Your marks are: " << marks << endl;
    }
};

Marks operator--(Marks &obj, int) {
    Marks duplicate(obj);
    obj.marks -= 1;
    return duplicate;
}

int main() {
    Marks m(50);
    m.yourMarksPlease();
    (m++).yourMarksPlease();
    m.yourMarksPlease();
    (m--).yourMarksPlease();
    m.yourMarksPlease();
    return 0;
}