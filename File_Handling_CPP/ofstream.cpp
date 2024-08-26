#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;

int main() {
    ofstream file;
    file.open("welcome.txt");

    if(!file) {
        cout << "Error in opening the file!" << endl;
        return 0;
    }

    // char data[100];
    // cout << "Enter your name: " << endl;
    // cin.getline(data, 100);
    // file << data << endl;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    // clear the newline character left in the input buffer due to cin >> age
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    file << "Hello " << name << "!" << endl;

    string friendName;
    cout << "Enter your friend's name: ";
    getline(cin, friendName);
    file << "Hello " << friendName << "!" << endl;

    return 0;
}