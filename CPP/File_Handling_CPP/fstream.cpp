#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream file;
    file.open("new.txt", ios::out | ios::binary);
    file << "This test should be written on the file!" << endl;

    char data[100];
    cout << "Enter your name: " << endl;
    cin.getline(data, 100);
    file << data << endl;

    file.close();
    return 0;
}
// ;