#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // ifstream file;
    // file.open("welcome.txt");

    // cout << "Reading from the file..." << endl;

    // char data[100];
    // while(file.getline(data, 100)) {
    //     cout << data << endl;
    // }

    // string data;
    // while(getline(file, data)) {
    //     cout << data << endl;
    // }

    string data;
    ifstream file;
    
    file.open("welcome.txt");
    if (!file) {
        cout << "Error in opening the file!" << endl;
        return 0;
    }

    // Move the file pointer 6 characters from the beginning
    file.seekg(6, ios::beg);
    getline(file, data);
    cout << "After seekg(6, ios::beg): " << data << endl;

    // Reset the file pointer to a known position
    file.clear();  // Clear any error flags
    file.seekg(0, ios::beg);

    // Move the file pointer 6 characters from the current position
    getline(file, data);  // First, read the first line
    file.seekg(5, ios::cur);
    getline(file, data);
    cout << "After seekg(5, ios::cur): " << data << endl;

    // Reset the file pointer to a known position
    file.clear();  // Clear any error flags
    file.seekg(0, ios::beg);

    // Move the file pointer 7 characters from the end
    file.seekg(-10, ios::end);
    getline(file, data);
    cout << "After seekg(10, ios::end): " << data << endl;

    file.close();
    return 0;
}