#include <iostream>
using namespace std;

void func() {
    throw 10;
}

int main() {
    int i = 1;
    try {
        if(i == 1) func();
        if(i == 2) throw "String";
        if(i == 3) throw 'c';        
    } 
    catch(int e) {
        cout << "Exception number: " << e << endl;
    } 
    catch(string e) {
        cout << "Exception: " << e << endl;
    } 
    catch(char e) {
        cout << "Exception: " << e << endl;
    }
    return 0;
}