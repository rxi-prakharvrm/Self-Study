#include <iostream>
using namespace std;

class GFG {
    private:
    int privateVariable = 10;

    protected:
    int protectedVariable = 20;

    public:
    friend class F;
};

class F {
    public:
    void display(GFG &g) {
        cout << g.privateVariable << endl;
        cout << g.protectedVariable << endl;
    }
};

int main() {
    GFG g;
    F f;
    f.display(g);    
    return 0;
}