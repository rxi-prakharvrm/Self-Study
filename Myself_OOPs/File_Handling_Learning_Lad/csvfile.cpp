#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

int main() {
    // Opening the binary file
    ifstream file("thisfile.csv");

    // check if the binary file is opened successfully or not!
    if(!file.is_open()) {
        cout << "Error while opening the file!" << endl;
    } else {
        // Reading the file
        file.seekg(0);
        char ch;
        while(file.good()) {
            file.get(ch);
            if(ch == ',') {
                cout << " | ";
                continue;
            }
            cout << ch;
        }
    }
    return 0;
}