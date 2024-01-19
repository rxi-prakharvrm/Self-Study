#include <iostream>
using namespace std;

class Marks {
    int marks;

    public:
    Marks(int m) {
        marks = m;
    }

    void operator++() {
        marks += 1;
    }

    // void operator--() {
    //     marks -= 1;
    // }
    
    friend void operator--(Marks &);

    void yourMarksPlease() {
        cout << "Your marks are: " << marks << endl;
    }
};

void operator--(Marks &obj) {
    obj.marks -= 1;
}

int main() {
    Marks m(87);
    m.yourMarksPlease();
    ++m;
    m.yourMarksPlease();
    --m;
    m.yourMarksPlease();
    return 0;
}