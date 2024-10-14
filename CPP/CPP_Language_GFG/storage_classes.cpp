#include <bits/stdc++.h>
using namespace std;

class Demo {
    public:
    const int x = 50;
    mutable int y = 100;

    void display() const {
        cout << x << " and " << y << endl;
    }
};

int main() {
    const Demo d;
    cout << d.x << endl;
    d.display();
    d.y = 200;
    d.display();
    return 0;
}