#include <iostream>
using namespace std;

class ObjectCount {
    public:
    static int count;

    ObjectCount() {
        count++;
    }

    static void showCount() {
        cout << "Total objects: " << count;
    }
};

int ObjectCount::count = 0;

int main() {
    ObjectCount obj1;
    ObjectCount obj2;
    ObjectCount obj3;
    ObjectCount::showCount();
    return 0;
}