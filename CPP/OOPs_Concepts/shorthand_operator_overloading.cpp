#include <iostream>
using namespace std;

class Marks {
    int marks;

    public:
    Marks(int m = 0) {
        marks = m;
    }

    void operator+=(int bonusmarks) {
        marks = marks + bonusmarks;
    }

    friend void operator-=(Marks &obj, int reducedmarks);

    void yourMarksPlease() {
        cout << "Your marks are: " << marks << endl;
    }
};

void operator-=(Marks &obj, int reducedmarks) {
    obj.marks = obj.marks - reducedmarks;
}

int main() {
    Marks m(79);
    m.yourMarksPlease();
    m += 10;
    m.yourMarksPlease();
    m -= 5;
    m.yourMarksPlease();
    return 0;
}