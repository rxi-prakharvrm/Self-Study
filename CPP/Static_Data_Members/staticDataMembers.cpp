#include <iostream>
using namespace std;

class Static {
    public:
    static int i; // we can only define static variables inside a function

    Static() {
        cout << i << endl;
        i++;
    }
};

int Static::i = 1;

int main() {
    Static s1;
    Static s2;
    Static s3;
    return 0;
}